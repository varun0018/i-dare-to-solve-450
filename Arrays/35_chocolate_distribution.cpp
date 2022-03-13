#include <bits/stdc++.h>
using namespace std;

int chocolateDistribution(int a[], int n, int m)
{
    sort(a, a + n);
    int ans = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = a[i + m - 1] - a[i];
        ans = min(ans, diff);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << chocolateDistribution(a, n, m);
}