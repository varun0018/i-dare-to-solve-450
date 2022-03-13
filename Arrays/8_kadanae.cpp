#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    long long mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (mx < sum)
        {
            mx = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << mx;
}