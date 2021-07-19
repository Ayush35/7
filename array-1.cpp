#include<iostream>
using namespace std;

int main()
{
    int a[5],rev[5],j=4;
    cout<<"Enter 5 elements";
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int i =0;i<5;i++)
    {
        rev[j]=a[i];
        j--;
    }
    cout<<"a then j"<<endl;
    for(int i =0;i<5;i++)
    {
        cout<<a[i]<<" and "<<rev[i]<<endl;
    }
    return 0;
}