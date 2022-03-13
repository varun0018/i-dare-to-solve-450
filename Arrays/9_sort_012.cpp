// Given an array of size N containing only 0s, 1s, and 2s;
// sort the array in ascending order.

#include <bits/stdc++.h>
using namespace std;

/* 
Dutch national flag problem 
easy 
1)take three pointers start,mid and end 
2)both start and mid begin from 0th index
3)if the value at a[mid] is 0 then move both start and mid by one
4)if the value at a[mid] is 1 then move only mid by 1
5)if value at a[mid] is 2 then decrement only end by 1

here basically 0 palce will be maintaied by start
1 place by mid
2 place by end


*/

void sort012(int a[], int n)
{
    int s = 0, e = n - 1, m = 0;
    while (m <= e)
    {
        if (a[m] == 0)
        {
            swap(a[s++], a[m++]);
        }
        else if (a[m] == 1)
        {
            m++;
        }
        else if (a[m] == 2)
        {
            swap(a[m], a[e--]);
        }
    }
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
    sort012(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}