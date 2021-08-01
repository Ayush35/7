#include<iostream>
using namespace std;

int lastOcc(int arr[] , int n , int k){
    if(n<0){
        cout<<"Not Found";
        return 0;
    }
    else if(arr[n] == k){
        cout<<"Last Occurence : "<<n<<endl;
        return 0 ;
    }
    lastOcc(arr , n-1, k);
}
int firstOcc(int arr[] , int n , int k,int count=0){
    
    if(count==n){
        cout<<"Not Found";
        return 0;
    }
    else if(arr[count] == k){
        cout<<"First Occurence : "<<count;
        return 0;
    }
    firstOcc(arr ,n,k,count+1);
    
}

int main(void){
    int n = 7 , k = 2;
    int arr[n] = {4,2,1,2,5,2,7};
    lastOcc(arr , n-1, k);
    firstOcc(arr, n-1, k);
}