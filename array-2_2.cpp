#include<iostream>
using namespace std;
int fmin(int arr[], int num);
int fmax(int arr[],int num)
{
    int fam = arr[0];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(fam<arr[j])
                fam=arr[j];
        }
    }
    return fam;   
}
int main()
{
    int n,a[50],min,max;
    cout<<"Enter no. of elements - ";
    cin>>n;
    cout<<"Enter Array - ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    min = fmin(a,n);
    max = fmax(a,n);
    cout<<"Minimum of array : - "<<min;
    cout<<"Maximum of array : - "<<max;
    return 0;
}
int fmin(int arr[], int num)
{
    int flag=arr[0];
    for(int i =0;i<num;i++)
    {
        for(int j=i;j<num;i++)
        {
            if(flag>arr[j])
                flag=arr[j];
        }
    }
    return flag;
}
