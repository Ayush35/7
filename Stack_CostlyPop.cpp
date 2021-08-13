#include<iostream>
#include<queue>
using namespace std;

class stack{
    int n;
    queue<int> q1;
    queue<int> q2;

    public:
        void push(int val){
            n++;
            q1.push(val);
        }
        void pop(){
            int j = q1.size()-1;
            for(int i=0;i<j; i++){
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
            q1.swap(q2);
            n--;
        }
        int top(){
            return q1.front();
        }
        
        int size(){
            return n;
        }
        bool empty(){
            return q1.empty();
        }
        void display(){
            queue<int> q3 = q1;
            while(!q3.empty()){
                cout<<q3.front()<<" ";
                q3.pop();
            }
            cout<<endl;
        }
};

int main(void){
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.display();
    // cout<<s1.top();
    s1.pop();
    s1.display();// cout<<s1.top();
    s1.pop();
    s1.display();// cout<<s1.top();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    s1.top();
    s1.top();
    
    // // cout<<s1.top();
    // s1.pop();

}
