#include "bits/stdc++.h"
using namespace std;
vector<vector<int>> ans;
void permute(vector <int> &a, int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx; i < a.size() ; i++){
        swap(a[i], a[idx]);
        permute(a , idx+1);
        swap(a[i], a[idx]);
    }
}

int main(void){
    vector<int> a;
    a = {1,2,3};
    permute(a,0);
    for(auto v:ans){
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}