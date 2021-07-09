#include <iostream>
using namespace std;
int buysell(int arr[], int n)
{
    int start = 0, end = 0;
    int si=0,ei=0;
    start= arr[0];
    end = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<start)
        {
            start = arr[i];
            si = i;
            end=0;
            ei =0;
        }
        if (arr[i] > end)
        {
            end = arr[i];
            ei = i;
        }
    }
    int c = end-start;
    cout<<c;
}
int main()
{
    int n = 5;
    int arr[n] = {7, 6, 4, 3, 1};
    buysell(arr, n);
    return 0;
}