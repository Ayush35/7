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

void printLevelOrder(Node* root){
    if(root == NULL)
        return ;
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data << " ";
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int sumAtk(Node* root , int k){
    if(root == NULL)
        return -1;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    int level = 0;
    int sum = 0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            if(level == k){
                sum = sum + node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int countallnodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countallnodes(root->left) + countallnodes(root->right) +1;
}
int sumnodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return sumnodes(root->left) + sumnodes(root->right) +root->data;
}

int heightofbt(Node* root){
    if(root == NULL){
        return 0;
    }

    return max(heightofbt(root->left) , heightofbt(root->right)) +1 ;
}
int calcdiameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int lheight = heightofbt(root->left);
    int rheight = heightofbt(root->right);
    int currDiametre = lheight + rheight +1;

    int ldiameter = calcdiameter(root->left);
    int rdiameter = calcdiameter(root->right);

    return max(max(currDiametre, ldiameter), rdiameter);    
}


int calcDiameter(Node *root , int * height){
    if(root == NULL){
        return 0;
    }

    int lh = 0, rh = 0 ;
    int ldiameter = calcDiameter(root->left, &lh);
    int rdiameter = calcDiameter(root->right, &rh);
    int currDiametre = lh + rh + 1;
    *height = max(lh , rh )+1;

    return max (currDiametre,max(ldiameter,rdiameter));
}

void sumreplacement(Node * root){
    if(root == NULL)   
        return ;
    
    sumreplacement(root->left);
    sumreplacement(root->right);
    if(root->left!=NULL){
        root->data += root->left->data;
    }
    if(root->right!=NULL){
        root->data += root->right->data;
    }
}

void preorder(Node *root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

bool isbalance(Node* root, int * height){
    if(root == NULL) return true;

    int lh = 0 , rh = 0;

    if(isbalance(root->left , &lh ) == false ){
        return false;
    }
    if(isbalance(root->right , &rh ) == false ){
        return false;
    }

    *height = max(lh, rh)+1;

    if( abs(lh-rh) <=1){
        return true;
    }
    return false;
    
}

void rightview(Node * root){
    // if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i=0; i<n; i++){
            Node* curr  = q.front();
            q.pop();
            if(i == n-1){
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }

        }
    }
}
void leftview(Node* root){
    if(root == NULL){
        return ;
    } 
    queue<Node*> q;

    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 1; i<=n ; i++){
            Node* temp = q.front();
            q.pop();
            if(i==1){
                cout<<temp->data<<" ";
            }

            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);  
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(8);
    root->right->left->right = new Node(9);
    root->right->left->right->left = new Node(10);
    root->right->left->right->right = new Node(10);
    // preorder(root);

    // cout<<endl;
    // cout<<sumAtk(root,2);
    // cout<<countallnodes(root)<<" ";
    // cout<<sumnodes(root)<<endl;
    // cout<<heightofbt(root)<<endl;
    // cout<<calcdiameter(root)<<endl;
    // int height = 0;
    // cout<<calcDiameter(root, &height)<<endl;
    // sumreplacement(root);
    // cout<<endl;
    // preorder(root);
    // // int height = 0;
    // if(isbalance(root , &height)){
    //     cout<<"Is balanced tree!"<<endl;
    // }
    // else if(!isbalance(root , &height)){
    //     cout<<"not a balanced  tree!"<<endl;
    // }
    // printLevelOrder(root);
    // rightview(root);
    leftview(root);
    return 0;
}