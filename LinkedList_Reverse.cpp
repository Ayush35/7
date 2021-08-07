#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
        data = val;
        next = NULL;
    }
};


void insertAtTail(node * &head ,int val){
    node* n = new node(val);
    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp ->next != NULL){
        temp = temp->next;
    }
    temp ->next = n;
}
void insertAtHead(node * &head ,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr = NULL;
    while(currptr!=NULL){
        nextptr= currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node * reverseRecursive(node* &head){
    
    if(head == NULL || head->next == NULL){
        return head;
    }
    node * newhead = reverseRecursive(head->next);
    head -> next -> next = head;
    head->next = NULL;
    return newhead;
}

node* reverseKnode(node * &head, int k){
    if(head == NULL||head->next == NULL){
        return head;
    }
    node* prevptr =NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr != NULL && count<k){
        nextptr = currptr->next;
        currptr -> next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    head->next = reverseKnode(nextptr , k);
    return prevptr;
}

int main(void){
    node *head = NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,3);
    insertAtTail(head ,4);
    display(head);
    // node *newHead = reverseRecursive(head);0
    node *newHead = reverseKnode(head,2);    
    display(newHead);
}