#include "bits/stdc++.h"
using namespace std;


// int binarySearch(int arr[] ,int n){
//     for(int i = 0; i<n; i++){

//     }
// }

// int findIndex(int arr[] , int n) {
//     int pivot= 0;
//     for(int i = 0; i < n-1; i++){
//         if(arr[i]<arr[i+1]){
//             pivot = i-1;
//         }
//     }
//     cout<<pivot;
//     return 0;
// }
int searchInRotatedArray(int arr[] , int key , int left , int right){
    if(left > right){
        return -1 ; 
    }

    int mid = (left+right)/2;
    if(arr[mid] == key){
        return mid ;
    }

    if(arr[left] <= arr[mid]){
        if(key >= arr[left] && key<= arr[mid]){
            return searchInRotatedArray(arr , key , left , mid-1);
        }
        return searchInRotatedArray(arr , key , mid +1 , right);
    }
    if(key >= arr[mid] && key<= arr[right]){
        return searchInRotatedArray(arr , key ,mid+1, right);
    }

    return searchInRotatedArray(arr ,key , left , mid-1);
}
  
int main(void){
    int arr[] = {6,7,8,9,10,1,2,5};
    int n = 8;
    int key = 8;
    cout<<searchInRotatedArray(arr, key , 0 , n);
}