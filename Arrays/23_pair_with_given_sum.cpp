#include <bits/stdc++.h>
using namespace std;

// int pair_with_given_sum(int a[], int n, int k)
// {
//     int c = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == k)
//             {
//                 c++;
//             }
//         }
//     }
//     return c;
// }

int pair_with_given_sum(int a[], int n, int k)
{
    int c = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        //m[x]->frequency of the repeating number
        // m[a[i]]++->incrementing the frequency of the number
        int x = k - a[i];

        if (m[x] == 0)
        {

            m[a[i]]++;
        }
        else
        {

            c = c + m[x];
            m[a[i]]++;
        }
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << pair_with_given_sum(a, n, k);
}