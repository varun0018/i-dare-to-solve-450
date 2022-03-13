/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/

#include <bits/stdc++.h>
using namespace std;

// using double for loop
// int duplicate_ele(int a[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 return a[i];
//             }
//         }
//     }
//     return -1;
// }

int duplicate_ele_hash(vector<int> &v, int n)
{
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            return v[i];
        }
        return -1;
    }
}

int main()
{
    vector<int> v;

    int n;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }

    cout << duplicate_ele_hash(v, n);
}