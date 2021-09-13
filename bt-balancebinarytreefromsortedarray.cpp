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
Node* sortedArraytoBST(int arr[] , int start , int end){

    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;
    Node*root = new Node(arr[mid]);
    root->left = sortedArraytoBST(arr, start , mid-1);
    root->right = sortedArraytoBST(arr, mid+1, end);
    return root;    
}
int main(){
    int arr[5] = { 10,20,30,40,50};
    Node * root = sortedArraytoBST(arr,0,4);
    preorder(root);
    return 0;
}