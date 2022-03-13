#include <bits/stdc++.h>
using namespace std;

int trappingRainwater(int a[], int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int left = a[i];
        for (int j = 0; j < i; j++)
        {
            left = max(left, a[j]);
        }

        int right = a[i];
        for (int j = i + 1; j < n; j++)
        {
            right = max(right, a[j]);
        }

        ans = ans + (min(left, right) - a[i]);
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
    cout << trappingRainwater(a, n);
}