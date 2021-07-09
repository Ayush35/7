#include<iostream>
using namespace std;
int minJumps(int num1[],int num2[],int n, int k)
{
    for(int i=0;i<k;i++)
    {
        // cout<<i;
        num1[i+n]=num2[i];
    }
    for(int i=0;i<n+k;i++)
        cout<<num1[i]<<endl;
    return 0;
}
int main()
{
    int n=6,k=6,arr1[50]={1,2,3,4,5,6},arr2[50]={10,11,12,13,14,15};
    minJumps(arr1,arr2,n,k);
    return 0 ;
}