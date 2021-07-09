#include <iostream>
using namespace std;
int printarr(int arr[],int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        if(i<n-1)
          cout<<",";
    }
    cout<<"]"<<endl;
    return 0;
}
int rotatebyone(int arr[], int n)
{
    int temp =0;
    printarr(arr,n);
    temp = arr[n-1];
    for(int i=n ; i>0 ; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0]=temp;
    printarr(arr, n);
    return 0;
}
int main()
{
    int n = 7,temp=0, nums[n] = {12,13,14,15,16,17,18};
    rotatebyone(nums,n);
    return 0;
}