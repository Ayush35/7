#include<iostream>
using namespace std;
int fmin(int arr[], int num);
int main()
{
    int n,a[n],min;
    cout<<"Enter no. of elements";
    cin>>n;
    for(int i =0;i<n;i++)
        cin>>a[i];
    min = fmin(a,n);
    cout<<"Minimum of array : - "<<min;
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
