#include <iostream>
using namespace std;

int* comthre(int A[], int B[], int C[], int n1, int n2, int n3)
{
    int n4 = 1;
    int rt[n4];
    for(int i = 0 ;i < n1 ; i++)
    {
        for(int j = 0 ; j< n2; j++)
        {
            if(A[i]==B[j])
                for(int k = 0 ; k < n3 ; k ++)
                    if(A[i] == C[k])
                    {
                        rt[n4-1]=A[i];
                        n4++;
                    }
        }
    }
    return rt;
}
int main()
{
    int n1 = 6, A[n1] = {1, 5, 10, 20, 40, 80}, n2 = 5, B[n2] = {6, 7, 20, 80, 100}, n3 = 8, C[n3] = { 3,
                                                                                                       4,
                                                                                                       15,
                                                                                                       20,
                                                                                                       30,
                                                                                                       70,
                                                                                                       80,
                                                                                                       120 };
    comthre(A,B,C,n1,n2,n3);
    return 0;                                                                                       
}