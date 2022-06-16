#include <bits/stdc++.h>
using namespace std;
// #define ll long long
  

int main() 
{
    priority_queue<int> pq;
    for (int i = 0; i < r+1; i++)
    {
        pq.push(arr[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }
    return pq.top;

    return 0;
}