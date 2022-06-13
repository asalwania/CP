#include <bits/stdc++.h>
using namespace std;
// #define ll long long

void mergeArrays(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temp arrays
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    // merge a and b
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void sortMerge(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        sortMerge(arr, l, mid);
        sortMerge(arr, mid + 1, r);

        mergeArrays(arr, l, mid, r);
    }
}

int main()
{

    int arr[6] = {7, 1, 5, 3, 6, 4};
    sortMerge(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}