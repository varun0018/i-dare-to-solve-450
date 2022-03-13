// Given an array Arr[] of N integers. Find the contiguous
// sub-array(containing at least one number) which has the maximum sum and
// return its sum.

#include <bits/stdc++.h>
using namespace std;

/*
make calculate sum by sum<-sum+a[i]
if sum is greater then mx make mx <- sum
if sum is less then 0 then make sum as 0

*/

int kadane(int a[], int n)
{
    int mx = a[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (mx < sum)
        {
            mx = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return mx;
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
    cout << kadane(a, n);
}