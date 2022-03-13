// Given an array arr[] and an integer K where K is smaller than size of array,
// the task is to find the Kth smallest element in the given array.
// It is given that all array elements are distinct.

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
    sort(a, a + n);
    int k;
    cin >> k;
    cout << a[k + 1];
}

// but not the correst method