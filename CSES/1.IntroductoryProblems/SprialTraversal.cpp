#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll r, c;
    cin >> r >> c;
    ll ans=0;
    if (r >= c)
    {
        if ((r & 1) == 1)
        {
            ans = ((r - 1) * (r - 1)) + c;
        }
        else
        {
            ans = (r * r) - c + 1;
        }
    }
    else
    {
        if ((c & 1) == 1)
        {
            ans = (c * c) - r + 1;
        }
        else
        {
            ans = ((c - 1) * (c - 1)) + r;
        }
    }
    cout << ans <<endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}