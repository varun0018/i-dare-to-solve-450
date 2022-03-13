#include <bits/stdc++.h>
using namespace std;

//using slinding window technique
int swapsKTogether(int a[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++) //loop to get count of numbers less than k
    //we need to take subarray of this size together and remove bad elements
    //that have to be swapped to get all the good ele together
    {
        if (a[i] <= k)
        {
            count++;
        }
    }
    int bad = 0;
    //bad elements are the ele that we need to swap
    //and we need to minimize these swaps
    for (int i = 0; i < count; i++)
    {
        if (a[i] > k)
        {
            bad++;
        }
    }

    int ans = bad;
    //i starts form 0
    //j starts form count which is the size of subarray we are trying to swap
    //to get all the good numbers together
    //if a[i]>k then decrement bad because we will move ahead and not including in next window
    //if a[j]> then increment bad because we will be including it in next window
    for (int i = 0, j = count; j < n; i++, j++)
    {
        if (a[i] > k)
        {
            bad--;
        }
        if (a[j] > k)
        {
            bad++;
        }
        ans = min(ans, bad);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << swapsKTogether(a, n, k);
}