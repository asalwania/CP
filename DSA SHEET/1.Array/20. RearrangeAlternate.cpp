#include <bits/stdc++.h>
using namespace std;
// #define ll long long
void moveNegative(int arr[], int n)
{
    int pv = 0, ng = 0;
    while (ng < n)
    {
        if (arr[ng] < 0)
        {
            swap(arr[pv], arr[ng]);
        }
        ng++;
        if (arr[pv] < 0)
        {
            pv++;
        }
    }
}
void solve()
{
    int n = 10;
    int arr[n] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};

    moveNegative(arr, n);
    int negCount = 0;
    int j = 0;
    while (j < n)
    {
        if (arr[j] < 0)
            negCount++;
        else
            break;
        j++;
    }
    int i = negCount;
    int pc = 1;
    while (i < n && pc < n)
    {
        if (arr[pc] < 0)
        {
            swap(arr[pc], arr[i]);
            i++;
        }
        pc += 2;
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    solve();

    return 0;
}