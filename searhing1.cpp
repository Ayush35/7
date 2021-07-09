#include<iostream>
using namespace std;

int main()
{
    int arr[]= {12,18,20,42,8,10};
    int key = 20;
    for(int i = 0; i<6 ; i++)
    {
        if(arr[i]==key)
        {
            cout<<"this is index : - "<<i;
        }
    }
    return 0;
}
