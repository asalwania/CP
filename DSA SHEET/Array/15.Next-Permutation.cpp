#include <bits/stdc++.h>
using namespace std;
// #define ll long long

void nextPermutation(vector<int> &nums)
{
    int k, l, n = nums.size();

    for (k = n - 2; k >= 0; k--)
    {
        if (nums[k] < nums[k + 1])
        {
            break;
        }
    }
    if (k < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (nums[l] > nums[k])
            {
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
}

int main()
{
    vector<int> nums = {4, 2, 0, 2, 3, 2, 0};
    nextPermutation(nums);
    // reverse(nums.begin() + 1, nums.end());
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}