// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a
// different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any
// profit, return 0.

#include <bits/stdc++.h>
using namespace std;

int buy_sell(int a[], int n)
{
    int mn = INT_MAX;
    int profit = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, a[i]);
        profit = a[i] - mn;
        ans = max(profit, ans);
    }
    return ans;
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
    cout << buy_sell(a, n);
}