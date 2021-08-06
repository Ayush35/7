#include<iostream>
using namespace std;

void swap(int arr[],int x , int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void dnfSort(int arr[] , int n){
    int mid=0;
    int low= 0;
    int high =n-1;
    while(mid<=high){
        if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 0){
            swap(arr,mid,low);
            mid++;
            low++;
        }
        else if(arr[mid] == 2){
            swap(arr,mid,high);
            high--;
        }
        
    }
}

int main(void){
    int n = 9;
    int arr[] = {1,0,2,1,0,1,2,1,2};
    dnfSort(arr,n);
    for(int i = 0; i < 9;i++){
        cout<<arr[i]<<" ";
    }
    
}