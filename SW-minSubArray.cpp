#include "bits/stdc++.h"
using namespace std;

void minSumSubarray(int arr[] , int n ,int x){
    int sum =0 ; //
    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        sum+=arr[i];
        if(sum>x){
            ans = i+1;
            break;
        }
    }
    int start = 0;
    int end = ans;
    while(end != n || start>end){
        // sum -= arr[start];
        // if(sum>x){
        //     ans = ans-1;
        // }
        // else if(sum<= x){
        //     sum+=arr[end];
        //     end++;
        // }
        // start++;
        if(sum>x){
            sum-= arr[start];
            start++;
            if(sum>x) {
                ans = ans -1;
            }
            else if(sum<=x){
                sum+=arr[end];
                end++;
            }
        }
    }
    cout<<ans;
}

int smallestSubarrayWithSum(int arr[], int n , int x){
    int sum = 0 , minLength = n+1, start = 0 ,end = 0 ;
    while(end<n){
        while(sum<= x && end < n){
            sum+= arr[end++];
        }
        while(sum>x && start <n){
            if(end - start < minLength){
                minLength = end-start; //

            }
            sum -=arr[start++];
        }
    }
    return minLength;
}

int main(void){
    int arr[] = {1,4,45,6,10,19};
    int n = 6;
    int x = 51;
    cout<<smallestSubarrayWithSum(arr, n, x);
}