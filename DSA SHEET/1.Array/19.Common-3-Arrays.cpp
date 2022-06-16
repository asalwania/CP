#include <bits/stdc++.h>
using namespace std;
// #define ll long long

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    map<int, int> freq;
    vector<int> V;
    for (int i = 0; i < n1; i++)
    {
        freq.insert({A[i], 1});
    }
    for (int i = 0; i < n2; i++)
    {
        if (freq[B[i]]==1)
        {
            freq[B[i]]++;
        }
    }
    for (int i = 0; i < n3; i++)
    {
        if (freq[C[i]] == 2)
        {
            freq[C[i]]++;
        }
    }

    for (auto i : freq)
    {
        if(i.second==3){
            V.push_back(i.first);
        }
    }

    return V;
}

int main()
{

    int n1 = 6;
    int n2 = 5;
    int n3 = 8;
    int A[n1] = {1, 5, 10, 20, 40, 80};
    int B[n2] = {6, 7, 20, 80, 100};
    int C[n3] = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> V = commonElements(A, B, C, n1, n2, n3);

    return 0;
}