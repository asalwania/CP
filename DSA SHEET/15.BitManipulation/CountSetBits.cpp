#include <bits/stdc++.h>
using namespace std;
// #define ll long long

int setBits(int N) {
        int count = 0;
        while(N !=0 ){
            N = (N&(N-1));
            count++;
        }
        return count;
    }

int main()
{
    cout <<setBits(6);

    return 0;
}