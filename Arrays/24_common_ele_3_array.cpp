#include <bits/stdc++.h>
using namespace std;

vector<int> intersection_3_array(int a[], int b[], int c[], int n1, int n2, int n3)
{
    vector<int> v;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                v.push_back(a[i]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < n3; j++)
        {
            if (v[i] == c[j])
            {
                v.push_back(c[i]);
            }
        }
    }
    return v;
}

int main()
{
    int n1, n2, n3;
    vector<int> ans;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n3; i++)
    {
        cin >> c[i];
    }
    ans = intersection_3_array(a, b, c, n1, n2, n3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}