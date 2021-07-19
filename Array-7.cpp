#include<iostream>
using namespace std;
int main()
{
    int arr[10],indx;
    cout<<"No. of values you want to enter in the array: - ";
    cin>>indx;
    cout<<"Enter array : - ";
    for(int i=0;i<indx;i++)
        cin>>arr[i];
    int temp=arr[indx-1];
    for(int i=indx-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    for(int i =0;i<indx;i++)
    {
        cout<<"Value of array for "<<i<<"th element is : -"<<arr[i]<<endl;
    }
    return 0;
}