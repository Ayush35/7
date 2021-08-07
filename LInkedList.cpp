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

bool search(node*head, int key){
    node* temp = head;
    while(temp->next != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    if(temp->data == key){
            return true;
    }
    return false;
}
void deleteAtHead(node * &head){
    node *todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head ,int val){
    node* temp = head;
    if(head == NULL){
        return ;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return ;
    }
    while(temp->next->data != val && temp->next->next != NULL){
        temp = temp ->next;
    }
    if(temp->next->next == NULL && temp->data != val){
        cout<<"not found";
        return;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void makecycle(node* &head ,int pos){
    node* temp = head;
    int count = 0;
    node* startnode;
    while(temp ->next != NULL){
        if(count==pos){
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
void removeCycle(node* &head,node* &fast){
    node* start = head;
    while(start-> next != fast->next){
        start = start-> next;
        fast = fast->next;
    }
    fast->next = NULL;
}
bool detectCycle(node* head){
    node *slow = head;
    node *fast = head;

    while(fast!= NULL && fast->next != NULL){
        slow = slow->next ;
        fast = fast->next->next;
        if(fast == slow){
            removeCycle(head,fast);
            return true;
        }
    }
    return false;
}

int main(){
    node * head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head , 4);
    insertAtTail(head , 5);
    insertAtTail(head , 6);
    makecycle(head, 1);
    cout<<detectCycle(head)<<endl;
    display(head);
}