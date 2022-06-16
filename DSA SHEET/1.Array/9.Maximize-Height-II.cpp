#include <bits/stdc++.h>
using namespace std;
// #define ll long long

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int currMin = arr[0], currMax = arr[n - 1];
    int res = currMax - currMin;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - k < 0)
            continue;

        currMin = min(arr[0] + k, arr[i] - k);
        currMax = max(arr[n - 1] - k, arr[i - 1] + k);

        res = min(res, (currMax - currMin));
    }
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getMinDiff(arr, n, k);

    return 0;
}