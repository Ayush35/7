#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){
    bool tsum;
    int check;
    int N = 100;
    int sum[N];
    for(int i = 0; i<N ; i++){
        sum[N]=-1;
    }
    for(int i = 0; i<n; i++){
        check=k-arr[i];
        if(sum[check] == 0){
            tsum = true;
            return tsum;
        }
        else{
            sum[arr[i]] = 0;
        }
    }
    return false ;
}

int main(void){
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    cout<<pairsum(arr,8,k);
}