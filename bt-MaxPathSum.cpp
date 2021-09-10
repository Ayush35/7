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
int maxPathSumUtil(Node * root, int &ans){
    if(root == NULL){
        return 0;
    }

    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);

    int nodemax = max(max(root->data,root->data+left+right) , max(root->data+left,root->data+right+right));
    ans = max(ans , nodemax);
    int singlePathSum = max(root->data,max(root->data+left , root->data+right));
    return singlePathSum;
}
int maxPathSum(Node * root){
    int ans = INT_MIN;
    maxPathSumUtil(root,ans);
    return ans;
}


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    cout<<maxPathSum(root);
    return 0;
}