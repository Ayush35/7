#include<iostream>
using namespace std;

int checkrecurence(int n , int arr[])
{
    const int N = 1000;
    int arrn[N];
    int minidx = N;
    for(int i = 0 ; i <N ; i++){
        arrn[i] =-1;
    }
    for(int i = 0 ; i < n ; i++){
        if(arrn[arr[i]] == -1)
            arrn[arr[i]] = i;
        else if(arrn[arr[i]] != -1){
            if(minidx > arrn[arr[i]]){
                minidx = arrn[arr[i]];
            }
        }
    }
    if(minidx == N){
        cout<<"-1";
    }
    else{
        cout<<minidx;
    }     
    return 0;
}
int main(void) {
    int n = 7;
    int arr[n]= {1,5,3,4,3,5,6};
    checkrecurence(n,arr);
}