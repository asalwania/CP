#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll twosPower(ll n)
{
    ll res=1;
    for (ll i = 1; i <= n; i++)
    {
        res = (res*2)%mod;
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    cout << twosPower(n);
    return 0;
}