#include <bits/stdc++.h>
using namespace std;

//Wrong approach
// int minimize_height(int a[], int n, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < k)
//         {
//             a[i] = a[i] + k;
//         }
//         else if (a[i] > k)
//         {
//             a[i] = a[i] - k;
//         }
//     }
//     sort(a, a + n);
//     int ans = a[n - 1] - a[0];
//     return ans;
// }

/*
first we have to sort the array as sorting 

*/

int minimize_height(int a[], int n, int k)
{
    sort(a, a + n);
    int ans = a[n - 1] - a[0];
    int largest = a[n - 1] - k;
    int smallest = a[0] + k;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(largest, a[i] + k);
        mn = min(smallest, a[i + 1] - k);
        if (mn < 0)
        {
            continue;
        }
        ans = min(ans, mx - mn);
    }
    return ans;
}

int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << minimize_height(a, n, k);
}