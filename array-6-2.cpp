#include<iostream>
using namespace std;
int main()
{
    int arr1[6]={ 12, 14, 15, 18, 20},arr2[6]={12,14,19,20,26},un_arr[50],in_arr[50],tp_arr[50],n=0,last=10; 
    for(int i = 0;i<10;i++)
    {
        if(i<5)
        {
            tp_arr[i]=arr1[i];
        }
        else if(i>=5)
        {
            tp_arr[i]=arr2[i-5];
        }
    }
    for(int i = 0; i<10;i++)
    {
        for(int j=0;j<last;j++)
        {
            if(tp_arr[i]==tp_arr[j] && i!=j)
            {
                un_arr[i]=tp_arr[i];
                in_arr[n]=tp_arr[j];
                for(int a=j;a<last;a++)
                {
                    tp_arr[a]=tp_arr[a+1];
                }
                last--;        
                n++;
            }
            else
            {
                un_arr[i]=tp_arr[i];
            }
        }
    }
    for(int i=0;i<last;i++)
    {
        cout<<" unarr "<<i<<" : - "<<un_arr[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<"inarr: - "<<in_arr[i]<<endl;
    }
    return 0;
}