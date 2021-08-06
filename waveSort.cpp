#include<iostream>
using namespace std;

void swap(int arr[],int x , int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void waveSort(int arr[] , int n){
    for(int i = 1; i < n; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i-1] && i<=n-2){
            swap(arr,i,i+1);
        }
    }   
}
int main(void){
    int n = 7;
    int arr[] = {1,3,4,7,5,6,2};
    waveSort(arr,n);
    for(int i = 0; i < 7;i++){
        cout<<arr[i]<<" ";
    }   
}