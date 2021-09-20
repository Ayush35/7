#include "bits/stdc++.h"
using namespace std;

int concate(queue<int> q1){
    string s1 = to_string(q1.front());
    q1.pop();
    string s2 = to_string(q1.front());
    q1.pop();
    string s3 = to_string(q1.front());
    q1.pop();
    string s = s1 + s2 + s3;
    int c = stoi(s);
    return c;
}

bool divisibleby3(int arr[] ,int n , int k){
    queue<int> q1;
    for(int i = 0; i<k; i++){
        q1.push(arr[i]);
    }
    
    for(int i = k-1; i<n; i++){
        int sum = concate(q1);
        if(sum%3 == 0){
            return true;
        }
        else{
            q1.pop();
            q1.push(arr[i]);
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    return false;

}

int main(void){
    int arr[] = {84,23,45,12,56,82};
    int k = 3;
    int  n = 6;
    cout<<divisibleby3(arr,n,k);
    cout<<endl;
    cout<<125682%3;
}