#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
using namespace std;

#define vi vector<int> 
#define pii pair<int,int> 
#define vii vector<pii> 
#define rep(i,a,b) for(int i = a, i<b ; i++)
#define first
#define ss second   
#define setBits(x) builtin_popcount(x)

signed main(){
    priority_queue <int , vector<int> >pq;
    pq.push(3);
    pq.push(45);
    pq.push(1920);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    priority_queue <int , vector<int>,greater<int> > pqm;
    pqm.push(3);
    pqm.push(45);
    cout<<pqm.top();
    return 0;
}