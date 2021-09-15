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
bool identical(Node* root1 , Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    else if(root1 == NULL || root2 == NULL){
        return false;
    }
    else{
        bool cond1 = root1->data = root2->data ; 
        bool cond2 = identical(root1->right, root2->right);
        bool cond3 = identical(root1->left, root2->left);
        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
    return true;
}
int main(){
    struct Node* root1 = new Node(1);
    
    root1->right = new Node(3);
    root1->right->left = new Node(2);
    root1->right->right = new Node(5);

    struct Node* root2 = new Node(1);
    
    root2->right = new Node(3);
    root2->right->left = new Node(2);
    root2->right->right = new Node(5);
    cout<<identical(root1 , root2);
    return 0;
}