#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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

int main()
{
    // int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    moveNegative(arr, n);
    printArray(arr, n);
    return 0;
}