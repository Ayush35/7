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
Node* insertBST(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->data > val){
        root->left = insertBST(root->left,val);
    }
    else{
        root->right = insertBST(root->right,val);
    }
    return root;
}
int main(){
    struct Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);
    return 0;
}