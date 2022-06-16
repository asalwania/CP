#include <bits/stdc++.h>
using namespace std;
// #define ll long long

long long merge(long long arr[], long long l, long long mid, long long r)
{
    long long inv_count = 0;
    long long n1 = mid - l + 1;
    long long n2 = r - mid;
    // temp arrays
    long long a[n1];
    long long b[n2];
    for (long long i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (long long i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    long long i = 0;
    long long j = 0;
    long long k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
            inv_count += n1 - i;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    return inv_count;
}

long long sortMerge(long long arr[], long long l, long long r)
{
    long long inv_count = 0;
    if (l < r)
    {
        long long mid = (l + r) / 2;
        inv_count += sortMerge(arr, l, mid);
        inv_count += sortMerge(arr, mid + 1, r);

        inv_count += merge(arr, l, mid, r);
    }
    return inv_count;
}

long long inversionCount(long long arr[], long long N)
{
    return sortMerge(arr, 0, N - 1);
}

int main()
{
    long long N = 3;
    long long arr[N] = {10, 10, 10};
    cout << inversionCount(arr, N);
    return 0;
}