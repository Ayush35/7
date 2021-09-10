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
Node * searchInBST(Node* root, int key){
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root-> data > key){
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}
int main(){
    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    
    root->right->right = new Node(6);
    if(searchInBST(root , 7) == NULL){
        cout<<"Key Does Not Exist";
    }
    else{
        cout<<"Key Exists";
    }
    return 0;
}