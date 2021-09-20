#include "bits/stdc++.h"
using namespace std;

int runningstream(vector<int> a){

    priority_queue<int,vector<int> > pq;
    priority_queue<int,vector<int>,greater<int> >pqm;
    for(int i = 0; i < a.size(); i++){
        cout<<"\nmedium : -  ";
        if(pq.empty()){
            pq.push(a[i]);
        }
        else if(pqm.empty()){
            if(pq.top() < a[i]){
                pqm.push(pq.top());
                pq.pop();
                pq.push(a[i]);
            }
            else{
                pqm.push(pq.top());
            }
        }
        else{
            if(pqm.top() <a[i] && pq.top()<a[i]){
                if(pq.size()-pqm.size() <0){
                    
                }
            }
        }


        int size = pqm.size() + pq.size();
        if(size%2 == 0){
            cout<<(pq.top() + pqm.top() )/2;
        }
        else{
            if(pq.size()%2!=0){
                cout<<pq.top();
            }
            else{
                pqm.top();
            }
        }
    } 
    // cout<<pq.top()<<endl;
    // cout<<pqm.top()<<endl;
    return 0;
}

int main(void){
    vector<int> a = {10,15,21,30,18,19};
    cout<<runningstream(a);
}