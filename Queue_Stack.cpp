#include "bits/stdc++.h"
using namespace std;

class que{
    stack<int> s1;
    stack<int> s2;

    public:
        void push(int x){
            s1.push(x);
        }
        int pop(){
            if(s1.empty()){
                cout<<"Que is empty!"<<endl;
                return -1 ;
            } 
            int x = s1.top();
            s1.pop();
            if(s1.empty()){
                return x;
            }
            int item = pop();
            s1.push(x);
            return item;
        }
        bool empty(){
            if(s2.empty()){
                return true;
            }
            return false;
        }
};

int main(){
    que q ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    // cout<<q.peek()<<endl;
    // q.pop();
    // cout<<q.peek()<<endl;
    // q.pop();
    // cout<<q.peek()<<endl;
    // q.pop();
    // cout<<q.peek()<<endl;
    // q.pop();
    // cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    // cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    // cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    // cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    // cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;


    return 0;
}