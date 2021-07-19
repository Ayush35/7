#include <iostream>
#include <climits>
using namespace std;

int maxsubarray(int n, int arr[])
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    int cursum = 0;
    int maxi = INT_MAX;
    int ind = 0;
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < n; i++)
        {
            currentSum += arr[i];
            if (currentSum < 0)
            {
                currentSum = 0;
                if (maxi > arr[i])
                {
                    maxi = arr[i];
                    ind = i;
                }
            }
            maxSum = max(maxSum, currentSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}
int main(void)
{
    int n = 6;
    int arr[n] = {-1, 4, -6, 7, 5, -4};
    maxsubarray(n, arr);
}