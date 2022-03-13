/*
Given an array of N integers arr[] where each element represents the max 
number of steps that can be made forward from that element. 
Find the minimum number of jumps to reach the end of the array 
(starting from the first element). 
If an element is 0, then you cannot move through that element.
Note: Return -1 if you can't reach the end of the array.
*/

#include <bits/stdc++.h>
using namespace std;

int min_no_jumps(int a[], int n)
{
    int step = 0;
    int k = a[0];
    for (int i = 0; i < n; i = i + k)
    {
        if (k < 0)
        {
            return -1;
        }
        else
        {
            k = a[i];
            step++;
        }
    }
    return step;
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
    cout << min_no_jumps(a, n);
}