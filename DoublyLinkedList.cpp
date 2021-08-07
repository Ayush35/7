#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAthead(node* &head,int val){
    node * n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node * &head ,int val){

    if(head == NULL){
        insertAthead(head,val);
        return ;
    }
    node * n = new node(val);
    node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteAthead(node* &head)
{
    node* todelete = head ; 
    head =  head -> next ;
    head ->prev = NULL;
    delete todelete;
}

void deletion(node* &head , int pos){
    if(pos==1){
        deleteAthead(head);
        return;
    }
    node* temp = head;
    int count = 1 ;

    while(temp != NULL && count != pos){
        temp = temp ->next;
        count++;
    }
    temp->prev->next = temp ->next;

    if(temp->next!=NULL){
        temp -> next->prev =temp ->prev ;
    }
    delete temp;
}

void display(node* head){
    node*temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
    cout<<endl;
}

void appendK(node* & head , int k){
    int count = 0 ;
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
        count++;
    }
    node* tail=temp;
    int i = 1;
    while(i<k){
        temp =temp->prev;
        i++;
    } 
    node *newhead = temp;
    node *newtail = temp->prev;

    newtail->next=NULL;
    tail->next = head;
    head->prev = tail;
    head = newhead;
    
}
int length(node* head){
    int l = 0 ; 
    node * temp = head; 

    while(temp != NULL){
        temp = temp ->next; 
        l++;
    }
    return l;
}

int intersection ( node* &head1 , node* &head2 ){
    int l1 = length(head1);
    int l2 = length(head2);
    int diff =  l1- l2+1 ;
    node* temp1 = head1;
    int i = 1;
    while(i<3){
        temp1 = temp1->next;
        i++;
    }
    node* temp2 =head2;
    int d = diff;
    while(temp1->data!=temp2->data && temp1->next!=NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
        d++;
    }
    cout<<temp1->data<<" "<<d;
}

int main(void) 
{
    node* head = NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,3);
    insertAtTail(head ,4);
    insertAtTail(head ,5);
    insertAtTail(head ,6);
    appendK(head,3);
    // display(head);


    node *head1 =NULL;
    insertAtTail(head1 ,1);
    insertAtTail(head1 ,2);
    insertAtTail(head1 ,3);
    insertAtTail(head1 ,4);
    insertAtTail(head1 ,5);
    insertAtTail(head1 ,6);
    node*head2 = NULL;
    insertAtTail(head2 ,9);
    insertAtTail(head2 ,10);
    insertAtTail(head2 ,5);
    insertAtTail(head2 ,6);
    intersection(head1,head2);
    cout<<endl;
    display(head2);
    display(head1);

} 