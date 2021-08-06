#include "bits/stdc++.h"
using namespace std;

void helper(vector<int> a, vector<vector<int>> &ans, int idx){
    if(idx == a.size()){
        ans.push_back(a);
    }
    for(int i = idx;i<a.size() ; i++){
        if(i!=idx && a[i] == a[idx]){
            continue;
        }
        swap(a[i], a[idx]);
        helper(a , ans,idx+1);
    }
}

vector<vector<int>> permute(vector<int> nums){
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    helper(nums, ans, 0);
    return ans;
}


int main(){
    vector<int> a = {1,2,2};

    vector<vector<int> > res = permute(a);

    for(auto i: res){
        for(auto ii : i){
            cout<<ii <<" ";
        }
        cout<<endl;
    }
    return 0;
}