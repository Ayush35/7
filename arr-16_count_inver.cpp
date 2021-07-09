#include<iostream>
using namespace std;

int count_inver(int arr[], int n)
{
    int count =0;
    for(int i =0; i<n;i++)
    {
        for(int j =0; j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]>arr[j] && i<j)
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
    int n=5;
    int arr[n]={2,4,1,3,5};
    int c=count_inver(arr,n);
    cout<<c;
    return 0;
}
