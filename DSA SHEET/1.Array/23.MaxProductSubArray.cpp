#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n)
{
    long long mn=arr[0];
    long long mx = arr[0];
    long long maxProd=arr[0];
    for (int i = 1; i < n; i++)
    {
        long long el = (long long)arr[i];
        if(el < 0){
            swap(mx,mn);
        }
        mx =max( el,mx*(el));
        mn = min(el,mn*(el));
        maxProd = max(mx,maxProd);
    }
    return maxProd;
}

int main()
{
    int n = 13;
    vector<int> arr = {3,12,15,23,33,-35,30,-40,-30,-30,-30,26,28};

    cout << maxProduct(arr, n);
    return 0;
}