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
void preorder(struct Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node* root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(struct Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void printsubtree(Node* root , int k ){
        if(root == NULL || k < 0){
            return ; 
        }  
        if(k == 0 ){
            cout<< root->data << " ";
            return ;
        }

        printsubtree(root-> left , k-1);
        printsubtree(root-> right , k-1);
}

int printNodesAtk(Node * root , Node * target , int k ){
    if(root == NULL){
        return -1;
    }
    if(root == target){
        printsubtree(root, k);
        return 0;
    }

    int dl = printNodesAtk(root-> left , target , k);
    if(dl != -1){
        if(dl + 1 == k){
            cout<<root->data<<" ";
        }
        else {
            printsubtree(root-> right , k-dl -2);
        }
        return 1+dl;
    }
    
    int dr = printNodesAtk(root-> right , target , k);
    if(dr != -1){
        if(dr + 1 == k){
            cout<<root->data<<" ";
        }
        else {
            printsubtree(root-> left , k-dr -2);
        }
        return 1+dr;
    }
    return -1;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    printNodesAtk(root ,root->left , 1);
    return 0;
}