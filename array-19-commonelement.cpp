#include<iostream>
#include<vector>
using namespace std;

int comEle(int A[], int B[],int C[],int n1,int n2, int n3)
{
    vector<int> v;
    int i=0 , j=0 , k=0 ;
    while(i<n1 && j<n2 && k<n3){
        if(A[i] == B[j] && B[j] == C[k]){
            v.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if(A[i]<B[j]) 
            {i++;}
        else if(B[j]<C[k])  
            {j++;}
        else 
            {k++;}
        
        int xx=A[i-1];
        while(A[i]==xx){
            i++;
        }
        int yy=B[j-1];
        while(B[j]==yy){
            j++;
        }
        int zz=C[k-1];
        while(C[k]==zz){
            k++;
        }
    }
    for(auto i = v.begin() ; i != v.end() ; ++i)
    {
        cout<<*i<< " ";
    }
    return v;
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