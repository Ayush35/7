#include<iostream>
using namespace std;
bool subarray(int n , int arr[]){
    bool raw;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            raw = true;
            return raw;
        }
        else if(arr[i] > 0){
            
        }
    }
}
int main(void){
    int n = 5;
    int arr[n]= {4 ,0 ,-3 ,1 ,6 };
    cout<<subarray(n, arr);
}