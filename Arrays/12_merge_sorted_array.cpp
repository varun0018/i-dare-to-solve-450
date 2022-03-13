
// Given two sorted arrays arr1[] of size N and arr2[] of size M.
// Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array
// in non-decreasing order without using any extra space.

#include <bits/stdc++.h>
using namespace std;

/*
since both the array are sorted we need to check form last index of 
first array and first index of second array if first array ele is greater
then second array ele then we swap them and incremet the pointer of second
array and decrement the pointer of first array
if the elements of first array is not greater than the ele fo second array
then we just break out as array ele are sorted there is no chance of 
finding ele greater than that first ele in the array


*/

void merge_array(int a[], int b[], int n, int m)
{

    int i = n - 1; //starts form last index
    int j = 0;     //starts form first index
    while (i >= 0 && j < m)
    {
        if (a[i] > b[j])
        {
            swap(a[i], b[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }

    sort(a, a + n);
    sort(b, b + n);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    merge_array(a, b, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}