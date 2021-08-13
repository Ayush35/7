#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;
    public:
        void push(int val){
            q2.push(val);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            q1.swap(q2);
        }
        void pop(){
            q1.pop();
        }
        void display(){
            while(!q1.empty()){
                cout<<q1.front()<<" ";
                q1.pop();
            }
            cout<<endl;
        }
};

int main(){
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.display();
    return 0;
}