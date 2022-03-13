#include <bits/stdc++.h>
using namespace std;

void partion(int arr[], int n, int a, int b)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] <= a)
        {
            swap(arr[mid++], arr[low++]);
        }
        else if (arr[mid] > a && arr[mid] < b)
        {
            mid++;
        }
        else if (arr[mid] > b)
        {
            swap(arr[mid], arr[high--]);
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
}