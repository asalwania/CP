#include <bits/stdc++.h>
using namespace std;
// #define ll long long

vector<int> factorial(int N)
{
    vector<int> res;
    res.push_back(1);
    int carry = 0;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < res.size(); j++)
        {
            int prod = res[j] * i + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }

        while (carry)
        {
            res.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    vector<int> V = factorial(4);
    for (auto value : V)
    {
        cout << value;
    }

    return 0;
}