#include <bits/stdc++.h>
using namespace std;
// #define ll long long

void brootForce()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                t++;
            }
        }
        if (t > count)
        {
            count = t;
            max = arr[i];
        }
    }
    cout << max << "-" << count << endl;
}

void withMap()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> M;
    for (int i = 0; i < n; i++)
    {
        if (M.find(arr[i]) != M.end())
        {
            M[arr[i]]++;
        }
        else
        {
            M.insert({arr[i], 1});
        }
    }

    int max = 0;
    int ele = 0;
    for (auto i : M)
    {
        if (i.second > max)
        {
            max = i.second;
            ele = i.first;
        }
    }

    cout << ele << "->" << max << endl;
}

void withMooresVoting()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currEle = arr[0];
    int currCount = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != currEle)
        {
            currCount--;
        }
        else
        {
            currCount++;
        }

        if (currCount <= 0)
        {
            currEle = arr[i];
            currCount = 1;
        }
    }

    // check for majority
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == currEle){
            count++;
        }
    }
    
    if(count > n/2){
        cout << currEle;
    }else{
        cout << -1;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        // brootForce(); // time & space => O(n^2), O(1);
        // withMap(); // time & space => O(n), O(n);
        withMooresVoting(); // time & space => O(n), O(1);
    }

    return 0;
}