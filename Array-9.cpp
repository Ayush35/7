#include<iostream>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    int max =arr[0];
    int avg=0;
    for(int i=0;i<n;i++)
    {
        avg += arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(max <arr[i])
            max= arr[i];
    }
    max-=k;
    
    avg /=n;
    cout<<"AVg= "<<avg<<endl;
    for(int i =0 ; i<n ; i++)
    {
        if( (arr[i]-k)>0 && arr[i]!=max)
        {
            if(arr[i]<avg/2)
                arr[i] =arr[i]+k;
            else
            {
                arr[i] =arr[i]-k;
            }
        }
        else
        {
            arr[i] = arr[i]+k;
        }
    }
    for(int j=0 ; j<n ; j++)
        cout<<"arr = "<<j<<" :: "<<arr[j]<<endl;
    int min=arr[0];
    for(int i=0 ; i<n ; i ++)
    {
        if(min>arr[i])
            min =arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(max <arr[i])
            max= arr[i];
    }
    cout<<min<<endl;
    cout<<max<<endl;

    cout<<max - min;
    return 0;
}
int main()
{
    int arr[50]={2, 6, 3, 4, 7, 2, 10, 3, 2, 1},n=10,k=5;
    // int arr[50]={1,5,8,10},n=4,k=2;
    getMinDiff(arr,n,k);

    return 0;
}