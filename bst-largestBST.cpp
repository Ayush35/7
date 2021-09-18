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

struct info{
    int size; 
    int max; 
    int min;
    int ans;
    bool isBST;
};
void inorder(struct Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
} 
info largestBSTinBT(Node* root){
    if(root == NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left == NULL && root->right == NULL){
        return {1, root->data , root->data ,1 , true};
    }

    info leftinfo = largestBSTinBT(root->left);
    info rightinfo = largestBSTinBT(root->right);

    info curr;
    
    curr.size = (1+ leftinfo.size + rightinfo.size);
    if(leftinfo.isBST && rightinfo.isBST && leftinfo.max < root->data && rightinfo.min > root->data){
            curr.min = min ( leftinfo.min , min(rightinfo.min , root->data));
            curr.max = min(rightinfo.max , max(leftinfo.max , root->data));
            curr.ans = curr.size;
            curr.isBST = true;
            return curr;
    }
    curr.ans = max(leftinfo.max , max(rightinfo.max , root->data));
    curr.isBST = false;

    return curr;
}


int main(){
    struct Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    cout<<largestBSTinBT(root).ans;
    inorder(root);
    return 0;   

}