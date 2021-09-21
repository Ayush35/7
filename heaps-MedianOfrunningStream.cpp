#include "bits/stdc++.h"
using namespace std;

// int runningstream(vector<int> a){

//     priority_queue<int,vector<int> > pq;
//     priority_queue<int,vector<int>,greater<int> >pqm;
//     for(int i = 0; i < a.size(); i++){
//         cout<<"\nmedium : -  ";
//         if(pq.empty()){
//             pq.push(a[i]);
//         }
//         else if(pqm.empty()){
//             if(pq.top() < a[i]){
//                 pqm.push(pq.top());
//                 pq.pop();
//                 pq.push(a[i]);
//             }
//             else{
//                 pqm.push(pq.top());
//             }
//         }
//         else{
//             if(pqm.top() <a[i] && pq.top()<a[i]){
//                 if(pq.size()-pqm.size() <0){

//                 }
//             }
//         }

//         int size = pqm.size() + pq.size();
//         if(size%2 == 0){
//             cout<<(pq.top() + pqm.top() )/2;
//         }
//         else{
//             if(pq.size()%2!=0){
//                 cout<<pq.top();
//             }
//             else{
//                 pqm.top();
//             }
//         }
//     }
//     // cout<<pq.top()<<endl;
//     // cout<<pqm.top()<<endl;
//     return 0;
// }
priority_queue<int, vector<int>, greater<int>> pqmin;
priority_queue<int, vector<int>> pqmax;

void insert(int x)
{
    if (pqmin.size() == pqmax.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }
        if (x < pqmax.top())
        {
            pqmax.push(x);
        }
        else
        {
            pqmin.push(x);
        }
    }
    else
    {
        if (pqmax.size() > pqmin.size())
        {
            if (x >= pqmax.top())
            {
                pqmin.push(x);
            }
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else
        {
            if (x <= pqmin.top())
            {
                pqmax.push(x);
            }
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findMedian(){
    if(pqmin.size() == pqmax.size()){
        return (pqmin.top() - pqmax.top())/(2.0);
    }
    else if(pqmax.size() > pqmin.size()){
        return pqmax.top();
    }
    else{
        return pqmin.top();
    }
}
int main(void)
{
    insert(10);
    insert(25);
    cout << findMedian() << endl;
}