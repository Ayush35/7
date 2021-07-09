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
        if (arr[i] < start)
        {
            start = arr[i];
            si = i;
        }
        if (arr[i] > end)
        {
            end = arr[i];
            ei = i;
        }
    }
    cout << "hello";
    // cout<<start[0]-end[0];
    return 0;
}
int main()
{
    int n = 6;
    int arr[n] = {7, 1, 5, 3, 6, 4};
    int c = buysell(arr, n);
    cout << c;
    return 0;
}