#include<iostream>
using namespace std;
int maxsubarray(int *p_ar,int indx)
{
    int i,fsum=0,ssum[indx]={0,0,0,0,0,0},result=0;
    for(i=0;i<indx;i++)
    {
        if(*(p_ar+i)>0)
        {
            fsum= fsum+ *(p_ar+i);
        }
        else if(*(p_ar+i)<0)
        {
            for(int j=0;j<indx;j++)
            {
                if(ssum[j]==0)
                {
                    ssum[j]=fsum;
                    break;
                }
            }
            fsum= fsum+ *(p_ar+i);
        }
    }
    for(i =0 ; i<indx;i++)
    {
        if(result<ssum[i])
            result =ssum[i];
        if(result == 0)
            result = ssum[0];
        cout<<"Ssum= "<<ssum[i]<<endl;
    }
    if(result>fsum)
        cout<<"max array is: - R "<<result;
    else
    {
        cout<<"max array is: - F "<<fsum;
    }
    return 0;
}
int main()
{
    int arr[10]={12,-15,12,-5,1,2},n=6;
    // cout<<"No. of values you want to enter in the array: - ";
    // cin>>indx;
    maxsubarray(&arr[0],n);
    return 0;
}
