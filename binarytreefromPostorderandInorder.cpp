#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[] , int start, int end, int val ){
    for(int i=start; i<=end; i++){
        if(inorder[i] == val){
            return i ;
        }
    }
    return -1;
}


Node* buildTree(int postorder[] , int inorder[] , int start , int end){
    static int idx = 4;
    if(start>end){
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    Node* curr = new Node(val);
    if(start== end){
        return curr;
    }    
    int pos = search(inorder,start,end,val);
    curr->left = buildTree(postorder,inorder,pos+1,end);
    curr->right = buildTree(postorder,inorder,start,pos-1);
 
    return curr;
}

void inorderPrint(Node *root){
    if(root == NULL) 
        return;
    inorderPrint(root->right);
    cout<<root->data<<" ";
    inorderPrint(root->left);   
}

int main(void){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    Node * root = buildTree(postorder, inorder ,0 , 4);
    inorderPrint(root);
}