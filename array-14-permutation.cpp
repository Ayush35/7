#include <iostream>
using namespace std;

void nextPermutation(vector<int> nums)
{
    int temp = 0, count = 0;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i - 1] < nums[i])
        {
            temp = nums[i - 1];
            nums[i - 1] = nums[i];
            nums[i] = temp;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j] && i < j)
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
    cout << "[";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i < nums.size() - 1)
            cout << ",";
    }
    cout << "]";
}
int main()
{
    
}