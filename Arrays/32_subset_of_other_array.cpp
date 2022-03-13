#include <bits/stdc++.h>
using namespace std;

string bruteForce(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                break;
            }
        }
        if (j == n)
        {
            return "No";
        }
    }
    return "Yes";
}

string usingUnorderedMap(int a[], int b[], int n, int m)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[a[i]] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        if (map[b[i]] != 1)
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    // cout << usingUnorderedMap(a, b, n, m);
    cout << bruteForce(a, b, n, m);
}