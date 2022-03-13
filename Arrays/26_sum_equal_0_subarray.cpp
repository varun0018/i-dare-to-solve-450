#include <bits/stdc++.h>
using namespace std;

bool bruteForce(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == 0)
            {
                return true;
            }
        }
    }
    return false;
}

bool isZero(int a[], int n)
{

    int pre_sum = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        pre_sum += a[i];
        if (s.find(pre_sum) != s.end())
        {
            return true;
        }
        if (pre_sum == 0)
        {
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}

bool bestApproach(int a[], int n)
{
    int sum = 0;

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum == 0 or m[sum] or a[i] == 0)
        {
            return true;
        }
        else
        {
            m[sum] = 1;
        }
    }
    return false;
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
    // cout << bruteForce(a, n);
    // cout << bestApproach(a, n);
    // cout << isZero(a, n);
}