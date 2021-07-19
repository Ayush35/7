#include<iostream>
using namespace std;

int missno(int n , int arr[], int S)
{
    int min = 0 ;
    int temp[n] ;
    for(int i = 0 ; i< n ; i++){
        temp[i] = -1;
    }
    for(int i = 0; i <n ; i++){
        if(arr[i]>=0){
            temp[arr[i]] = i;
            if(temp[min]!=-1){
                while( temp[min] != -1){
                    min++;
                }
            }
        }
    }
    cout<<min;
    return 0;
}
int main(void) {
    int n = 4  , S =5;
    int arr[n]= {0,-9,1,3,-4,5};
    missno(n,arr,S);
}