#include <bits/stdc++.h>
using namespace std;

/*
easy two pointer method
take start form 0 and end from n-1
1)if start is less then 0 and end is also less than 0
2)if start is greater than 0 and end is lees than 0 only then 
swap the ele of a[start] and also a[end]
and also increment start by one and decrement end by 1
*/

void negative_to_one_side(int a[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (a[s] < 0 && a[e] < 0)
        {
            s++;
        }
        else if (a[s] > 0 && a[e] < 0)
        {
            swap(a[s], a[e]);
            s++;
            e--;
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
        cin >> a[n];
    }
    negative_to_one_side(a, n);
}