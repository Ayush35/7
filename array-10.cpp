#include<iostream>
using namespace std;
int minJumps(int arr[], int n)
{
    int a=0,i =0;

    if(arr[0]==0)
        return 0;
    while(i<n)
    {
        i=i+arr[i];
        a++;
    }
    cout<<a;
}
int main()
{
    int n=11,arr[n]={1,3,5,8,9,2,6,7,6,8,9},k=2;
    minJumps(arr,n);
    return 0 ;
}