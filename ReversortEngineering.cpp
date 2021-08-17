#include "bits/stdc++.h"
using namespace std;

bool check(int n , int c){
    if(c>n-1 && c<((n*(n+1) /2)-1)){
        return true;
    }
    return false;
}

vector<int> reversEngineer(vector<int> v,int n , int c){
    if(c <=0){
        return v;
    }
    vector<int> restvect = reverseEngineer(copy(start+1,end,v) ,int n , int c);
}


int main(void){
    int n = 4;
    int c = 6;

    vector<int> v;

    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    cout<<copy(start,end,v.begin())<<endl;
    // cout<<check(n,c)<<endl;

    // reversEngineer(v,n,c);
}