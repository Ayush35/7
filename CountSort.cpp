#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }
    k++;

    int arrtemp[k] = {0};

    for (int i = 0; i < n; i++)
    {
        arrtemp[arr[i]]++;
    }

    for (int i = 0; i < k; i++)
    {
        arrtemp[i + 1] += arrtemp[i];
    }

    int solarr[n] = {0};
    for (int j = n - 1; j >= 0; j--)
    {
        arrtemp[ arr[j] ] = arrtemp[arr[j]] - 1;
        solarr[arrtemp[arr[j]]] = arr[j]; 
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = solarr[i];
    }
}

int main()
{
    int n = 9;
    int arr[n] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}