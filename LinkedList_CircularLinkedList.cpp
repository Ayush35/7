#include<iostream>
using namespace std;

class node { 
    public:

    int data;
    node* next;

    node(int val){
        data = val ;
        next = NULL;
    }
};

void insertAtHead(node * &head ,int val){
    node * n = new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next !=head){
        temp =temp->next;
    }
    temp->next =n;
    n->next = head;
    head = n;
}

void insertAtTail(node* &head , int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    node * n = new node(val);
    node*temp = head;

    while(temp->next != head){
        temp = temp->next;        
    }
    temp ->next = n;
    n ->next = head;
    
}
void display(node* &head){
    node*temp = head;

    do{
        cout<<temp ->data<< " ";
        temp= temp ->next;
    }while(temp!= head);
    cout<<endl;
}
void deleteathead(node* &head){
    node* temp = head;
    while(temp->next != head){
        temp= temp->next;
    }
    
    node* todelete = temp->next;
    temp->next = temp->next->next;
    head =  temp->next;
    delete todelete;
}

void deletion(node* &head,int val){
    node*temp = head; 
    if(head->data == val){
        deleteathead(head);
        return;
    }
    while(temp->next->data != val){
        temp=temp->next;
    }
    // cout<<temp->data<<endl;
    node*todelete = temp->next;
    temp->next= temp->next->next;
    delete todelete;
}

int main(void){
    node*head=NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,3);
    insertAtTail(head ,4);
    insertAtHead(head,5);
    deletion(head,5);
    display(head);    
}