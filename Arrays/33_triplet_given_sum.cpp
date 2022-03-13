#include <bits/stdc++.h>
using namespace std;

bool tripletSum(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool twoPointerApproach(int a[], int n, int x)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        int toFind = x - a[i];

        while (low < high)
        {
            if (a[low] + a[high] == toFind)
            {
                return true;
            }
            else if (a[low] + a[high] > toFind)
            {
                high--;
            }
            else if (a[low] + a[high] < toFind)
            {
                low++;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // int ans = tripletSum(a, n, x);
    // if (ans)
    // {
    //     cout << "triplet found" << endl;
    // }
    // else
    // {
    //     cout << "triplet not found" << endl;
    // }
    int ans = twoPointerApproach(a, n, x);
    if (ans)

    {
        cout << "triplet found";
    }
    else
    {
        cout << "triplet not found";
    }
}