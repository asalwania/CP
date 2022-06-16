#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll res = ((i*i)*((i*i)-1)-(4*2)-(8*3)-((i-4)*4*4)-(4*4)-((i-4)*6*4)-((i-4)*(i-4)*8))/2;
        cout << res << endl;
    }
    

    return 0;
}