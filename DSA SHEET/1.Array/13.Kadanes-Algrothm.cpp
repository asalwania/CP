#include <bits/stdc++.h>
using namespace std;
// #define ll long long

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxSum = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int n = 5;
    int arr[n] = {1,
                  2,
                  3,
                  -2,
                  5};
    cout << maxSubarraySum(arr, n);
    return 0;
}