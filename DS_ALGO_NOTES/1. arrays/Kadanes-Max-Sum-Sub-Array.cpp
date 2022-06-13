#include <bits/stdc++.h>
using namespace std;
// #define ll long long

void brootForce(int *arr, int n)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = arr[i];
        int inner_max_sum = INT_MIN;
        for (int j = i; j < n; j++)
        {
            curr_sum = curr_sum + arr[j];
            if(curr_sum > inner_max_sum){
                inner_max_sum = curr_sum;
            }
        }
        if(inner_max_sum > max_sum){
            max_sum = inner_max_sum;
        }
    }
    cout << max_sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    brootForce(arr, n);

    return 0;
}