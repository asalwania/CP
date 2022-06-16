#include <bits/stdc++.h>
using namespace std;
// #define ll long long

int getPairsCount(int arr[], int n, int k)
{
    int count = 0;
    map<int, int> freqMap;
    for (int i = 0; i < n; i++)
    {
        int b = k-arr[i];
        if(freqMap[b]){
            count += freqMap[b];
        }
        freqMap[arr[i]]++;
    }
    
    return count;
}

int main()
{

    int n = 4, k = 2;
    int arr[n] = {1, 1, 1, 1};
    cout << getPairsCount(arr, n, k);

    return 0;
}