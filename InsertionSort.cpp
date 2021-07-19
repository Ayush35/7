#include <iostream>
using namespace std;
int InsertionSort(int arr[], int n)
{
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i] < arr[i - 1])
    //     {
    //         for (int j = i - 1; j >= 0; j--)
    //         {
    //             if (j == 0)
    //             {
    //                 int min = arr[i];
    //                 for (int k = i; k >= 1; k--)
    //                 {
    //                     arr[k] = arr[k - 1];
    //                 }
    //                 arr[0] = min;
    //                 break;
    //             }
    //             else if (arr[j] < arr[i])
    //             {
    //                 int min = arr[i];
    //                 for (int k = i; k > j; k--)
    //                 {
    //                     arr[k] = arr[k - 1];
    //                 }
    //                 arr[j + 1] = min;
    //                 break;
    //             }
    //         }
    //     }
    // }

    for(int i = 1; i < n ; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = current;
    }

    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
int main(void)
{
    int n = 5;
    int arr[n] = {7,4,2,8,1};
    InsertionSort(arr, n);
}