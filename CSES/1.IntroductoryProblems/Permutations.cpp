#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    if(n<5 && n>1){
        cout << "NO SOLUTION";
        return 0;
    }
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }

    for (int i = 0; i < n-1; i += 2)
    {
        if(i >= n-3){
            swap(arr[i],arr[n-1]);
            break;
        }
        if((i&1)==0){
            swap(arr[i],arr[i+3]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}