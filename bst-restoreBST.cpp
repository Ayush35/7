#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node* right;
    Node(int val){
        data = val; 
        left = NULL;
        right = NULL;
    }
};

void inorder(struct Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
} 

void swap(int * a ,int * b){
    int temp = * a ; 
    * a = *b;
    *b = temp;
}

void calcpointers(Node * root , Node**first , Node**last ,
                        Node** prev, Node** mid) { 
    if(root == NULL){
        return ;
    }
    calcpointers(root->left , first, mid , last , prev);

    if(*prev && root->data < (*prev)->data){
        if(!*first){
            *first = *prev;
            *mid = root;
        }
        else{
            *last = root;
        }
    }
    *prev = root;

    calcpointers(root->right ,first , mid , last , prev);
}

void restoreBST(Node* root){
    Node*first, *last, *mid, *prev;
    first = NULL;     
    last = NULL;
    mid = NULL;
    prev = NULL;

    calcpointers(root, &first, &last, &mid , &prev);
    if(first && last){
        swap(&(first->data) ,&(last->data));
    }
    else if(first && mid){
        swap(&(first->data), &(mid->data));
    }
}

int main(){
    struct Node* root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right= new Node(4);
    root->right->right= new Node(13);

    inorder(root);
    cout<<endl;
    restoreBST(root);
    cout<<endl;
    inorder(root);
    return 0;   

}