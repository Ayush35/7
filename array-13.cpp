#include <iostream>
using namespace std;
int MaxSumSubArray(int arr[], int n)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout << max_so_far;
    return 0;
}
int main()
{
    int n = 9,temp=0, nums[n] = {4, -2, -3, 4, -1, -2, 1, 5, -3};
    // MaxSumSubArray(arr,n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] > nums[j] && i < j)
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<nums[i];
        if(i<n-1)
          cout<<",";
    }
    cout<<"]";
    return 0;
}