#include <iostream>
using namespace std;

int allsubarray(int n, int arr[])
{
    int k = 0;
    while (k < n)
    {
        for (int i = k; i < n; i++)
        {
            for (int j = k; j <= i; j++)
            {
                cout << arr[j];
            }
            cout << endl;
        }
        k++;
    }
    return 0;
}
int main(void)
{
    int n = 4;
    int arr[n] = {-1, 4, 7, 2};
    allsubarray(n, arr);
}