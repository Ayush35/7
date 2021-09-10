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
void flatten(Node* root){
    if(root == NULL || (root->left == NULL && root->right == NULL))
    {
        return ; 
    }
    if(root -> left != NULL){
        flatten(root -> left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;
        Node* t = root->right;
        while(t->right != NULL){
            t = t->right;
        }
        t-> right = temp;
    }
    flatten(root->right);
}
int main(){
    struct Node* root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    // root->right->left = new Node(6);
    root->right->right = new Node(6);
    flatten(root);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}