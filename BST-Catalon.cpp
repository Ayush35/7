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

vector<Node* > constructTrees(int start, int end){
    vector <Node*> trees;
    if(start> end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i = start ; i<= end; i++){
        vector<Node*> leftSubtrees = constructTrees(start , i-1);
        vector<Node*> rightSubtrees = constructTrees(i+1 , end);
        
        for(int j = 0 ; j < leftSubtrees.size() ; j++){ 
            Node* left = leftSubtrees[j];
            for(int k = 0 ; k < rightSubtrees.size() ; k++){
                Node* right = rightSubtrees[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}
int main(){
    vector<Node*> totalTrees = constructTrees(1,3);

    for(int i = 0; i < totalTrees.size(); i++){
        cout<<(i+1) << " : ";
        preorder(totalTrees[i]);
        cout<<endl;
    }
    
    return 0;
}