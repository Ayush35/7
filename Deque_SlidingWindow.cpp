#include "bits/stdc++.h"
using namespace std;

int main(){
    int n , k;cin>>n>>k;

    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    deque<int> q; 
    vector<int> ans; 
    for(int i = 0; i<k; i++){
        while(!q.empty() && a[q.back()]< a[i] ){
            q.pop_back();
        }
        q.push_back(a[i]);
    }
    ans.push_back(nums[q.front()]);
    for(int i = 0; i<n; i++){
        if(q.front() = i-k){
            q.pop_front();
        }
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(ans[q.front()]);
    }
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}