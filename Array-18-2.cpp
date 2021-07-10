#include<iostream>
using namespace std;

int findfun(int arr[],int n,int k)
{
    int count = 0;
   for(int i=0;  i < n ; i++)
   {
       for (int j = i+1; j < n; j++)
       {
           if(( arr[i] + arr[j] ) == k)
           {
               count++;
           }
       }
   }
    return count;
}
int main()
{
    int n = 4, k = 6;
    int arr[n]={1,5,7,1};
    int p=findfun(arr,n,k);
    cout<<p;
    return 0;
}