#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    string res;
    vector<int> v1, v2;
    if ((total & 1))
    {
        res = "NO";
    }
    else
    {
        // res = "YES";
        if ((n % 4) == 0)
        {
            res = "YES";
            for (int i = 1; i <= n / 4; i++)
            {
                v1.push_back(i);
            }
            for (int i = 0; i < n / 4; i++)
            {
                v1.push_back(n - i);
            }
            for (int i = (n / 4) + 1; i < (n - (n / 4)+1); i++)
            {
                v2.push_back(i);
            }
        }
        else if ((n % 4) == 3)
        {
            res = "YES";
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            for (int i = 4; i <= (n / 4) + 3; i++)
            {
                v1.push_back(i);
            }
            for (int i = 0; i < n / 4; i++)
            {
                v1.push_back(n - i);
            }
            for (int i = (n / 4) + 1 +3; i < (n - (n / 4)+1); i++)
            {
                v2.push_back(i);
            }
        }
        else
        {
            res = "NO";
        }
    }

    if (res == "NO")
    {
        cout << res;
    }
    else
    {
        cout << res << endl;
        cout << v1.size() << endl;
        for(auto i:v1){
            cout << i << " ";
        }
        cout << endl << v2.size() << endl;
        for(auto i:v2){
            cout << i << " ";
        }
    }

    return 0;
}