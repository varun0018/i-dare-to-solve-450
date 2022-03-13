#include <bits/stdc++.h>
using namespace std;

int Product(int a[], int n)
{
    int product = 1;
    int final_ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        product = a[i];
        for (int j = i + 1; j < n; j++)
        {
            product = product * a[j];
            final_ans = max(product, final_ans);
        }
    }
    return final_ans;
}

int bestApproach(int a[], int n)
{
    int ans = a[0];
    int mx = a[0];
    int mn = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < 0)
        {
            swap(mn, mx);
        }

        mx = max(a[i], a[i] * mx);
        mn = min(a[i], a[i] * mn); //min and max function does not work for long long
        ans = max(mx, ans);
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
    cout << Product(a, n);
    // cout << bestApproach(a, n);
}