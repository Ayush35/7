#include <iostream>
using namespace std;

int fmin(int arr[], int n,int start)
{
    int min = arr[0];
    int idx = start;
    for (int i = start+1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            idx =i ;
        }
    }
    // cout<<idx<<endl;
    return idx;
}


void reversort(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        
        int j = fmin(arr, n , i);
        if(i == j){continue;}
        int x = i;
        while(x!=j && x<j){
            int temp = arr[x];
            arr[x] = arr[j];
            arr[j] =temp;
            x++;
            j--;
        }
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
int main(void)
{
    int n = 7;
    int arr[n] = {7, 6, 5, 4, 3, 2, 1};
    reversort(arr, n);
}