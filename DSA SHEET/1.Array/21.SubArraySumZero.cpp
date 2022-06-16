#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool subArrayExists(int arr[], int n)
{
    unordered_map<int, int> M;
    bool ans = false;
    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == 0 or arr[i] == 0 or M[prefixSum] == 1)
        {
            ans = true;
            break;
        }
        else
        {
            M[prefixSum]=1;
        }
    }
    return ans;
}
int main()
{
    int n = 5;
    int arr[n] = {4, 2, 3, 1, -6};
    cout << subArrayExists(arr, n);

    return 0;
}