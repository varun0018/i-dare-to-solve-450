
// Given an array of integers. Find the Inversion Count in the array.

// Inversion Count: For an array, inversion count indicates how far (or close)
// the array is from being sorted. If array is already sorted then the inversion
// count is 0. If an array is sorted in the reverse order then the inversion count
// is the maximum.
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

#include <bits/stdc++.h>
using namespace std;

// int inversion_count(int a[], int n) //TLE code
// {
//     int ans = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }

long long merge(int arr[], int left, int mid, int right)
{
    long long inversion = 0;
    int n1 = mid - left + 1;
    int n2 = right - left;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = 1;
    //i points to a and j points to b
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            // a[i]>b[j] and i<j
            arr[k] = b[j];
            inversion = inversion + n1 - i; //to count inversions
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inversion;
}

long long mergeSort(int a[], int left, int right)
{
    long long inversions = 0;
    if (left < right)
    {
        int mid = (left + right) / 2;
        inversions = inversions + mergeSort(a, left, mid);
        inversions = inversions + mergeSort(a, mid + 1, right);
        inversions = inversions + merge(a, left, mid, right);
    }

    return inversions;
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
    cout << mergeSort(a, 0, n - 1);
}