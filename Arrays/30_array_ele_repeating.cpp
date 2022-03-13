// Given an array of size n and a number k, find all elements that appear more than n/k times
#include <bits/stdc++.h>
using namespace std;

int reatingNTimes(int a[], int n, int k)
{
    int x = n / k;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    for (auto i : freq)
    {
        if (i.second > x)
        {
            cout << i.first << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    reatingNTimes(a, n, k);
}