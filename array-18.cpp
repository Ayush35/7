#include<iostream>
using namespace std;

int findfun(int arr[],int n,int k)
{
    int temp[n];
    int pcount=0;
    for(int i =0 ; i<n ;i++)
    for(int i = 0 ; i<n ; i++)
    {
        temp[i] = k-arr[i];
        for(int j = 1 ;j<=i;j++)
            if(arr[i]==temp[j])
                {cout<<arr[i]<<",,"<<arr[j]<<endl;pcount++;}
    }
    for(int i = 0 ; i< n ;i++)
    {
        // cout<<temp[i]<<",";
    }
    cout<<pcount;
    return 0;
}
int main()
{
    int n = 49, k = 50;
    int arr[n]={48,24,99,51,33,39,29,83,74,72,22,46,40,51,67,37,78,76,26,28,76,25,10,65,64,47,34,88,26,49,86,73,73,36,75,5,26,4,39,99,27,12,97,67,63,15,3,92,90};
    int p=findfun(arr,n,k);
    // cout<<p;
    return 0;
}