#include <bits/stdc++.h>
using namespace std;
// #define ll long long

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int mpsf = prices[0];
    int currProfit = 0;
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        int currProfit = prices[i] - mpsf;
        maxProfit = max(currProfit, maxProfit);
        mpsf = min(mpsf, prices[i]);
    }
    return maxProfit;
}

int main()
{

    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);

    return 0;
}