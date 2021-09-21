#include<iostream>
using namespace std; //
#include<set> // set
#include<queue> // queue
#include<vector> // 
#include<unordered_map>
#include<stack> // stack
#include<algorithm> //
#include<string>

#define vi vector<int>
#define vii pair<int,int>
#define pii pair <int,int>
#define rep(i,a,b) for(int i = a ; i<b; i++)
#define ff first 
#define ss second
#define setBits(x) builtin_popcount(x)

int main(void){
    priority_queue<int , vi> pq;    
    pq.push(1);
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(8);
    int k = 12;
    int sum = 0;
    int count= 0; 
    rep(i,0,5){
        sum+=pq.top();
        count++;
        if(sum>k){
            sum-=pq.top();
            count--;
        }
        else if(sum==k){break;}
        pq.pop();
    }
    cout<<count;
}