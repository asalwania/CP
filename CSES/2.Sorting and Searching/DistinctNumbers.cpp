#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr,arr+n);
    ll currNumber=arr[0];
    int count=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != currNumber) {
            count++;
            currNumber = arr[i];
        }
    }
    
    cout << count;

    return 0;
}