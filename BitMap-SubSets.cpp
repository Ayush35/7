#include<iostream>
using namespace std;

int subsets(int arr[],int n){
    for(int i=0; i<(1<<n) ; i++){
        for(int j=0; j<n ; j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

int main(void){
    int n=4;
    int arr[n] = {1,2,3,4};
    subsets(arr,n);
}