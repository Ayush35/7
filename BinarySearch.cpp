#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int key){
    int s= 0 ;
    int e = n ;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key ){
            return mid+1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(void){
    int n = 10;
    int arr[n]={10,14,19,26,27,31,33,35,42,44};
    int k=31 ;
    cout<<binarySearch(arr,n,k);
}