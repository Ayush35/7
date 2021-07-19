#include<iostream>
using namespace std;
int main()
{
    int arr1[6]={ 12, 14, 15, 18, 20},arr2[6]={12,14,19,20,26},un_ar[50],in_arr[50],tp_arr[50],n=0; 
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
    for(int i = 0;i<10;i++)
    {
        for(int j=i;j<10;j++)    
        {
            if(tp_arr[i]>tp_arr[j])
            {
                temp=tp_arr[i];
                tp_arr[i]=tp_arr[j];
                for(int n=i;n<=j;n++)
                {
                    
                }
            }
        }
    }
    for(int i = 0;i<10;i++)
    { 
        cout<<"tp array "<<i<<": - "<<tp_arr[i]<<endl;
    }
    // for(int i =0;i<10;i++)
    // {
    //     if(tp_arr[i]==tp_arr[i+1])
    //     {
    //         un_ar[i]=tp_arr[i];
    //         i++;
    //         in_arr[n]=tp_arr[i];
    //         n++;
    //     }
    //     else
    //     {
    //         un_ar[i]=tp_arr[i];
    //     }   
    // }
    // for(int i=0;i<10;i++)
    //     cout<<"unarr "<<i<<":-  "<<un_ar[i];
    // cout<<endl;
    // for(int i=0;i<n;i++)
    //     cout<<"in_arr "<<i<<": - "<<in_arr[i];
    return 0;
}