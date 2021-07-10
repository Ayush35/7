#include<iostream>
using namespace std;

int comEle(int a[], int b[],int c[],int n1,int n2, int n3)
{
    int temp[n2];
    int count = 0;
    int tn = max(n1,n2);
    tn = max(n3,tn);
    cout<<tn;
    // for(int i = 0; i < tn;i++){
    //     // if(b)
    // }

    return 0;
}
int main()
{
    int n1 = 6, n2 = 5 , n3 = 8;
    int a[] = {1,5,10,20,40,80};
    int b[] = {6,7,20,80,100};
    int c[] = {3,4,15,20,30,70,80,120};
    comEle(a,b,c,n1,n2,n3);
    return 0;
}