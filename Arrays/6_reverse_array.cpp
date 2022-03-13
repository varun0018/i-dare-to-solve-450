// #include <iostream>

// using namespace std;

// void swap(int &num1, int &num2)
// {
//     int temp;
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> swapper(vector<int> arr)
{
    for (auto i : arr)
    {
        arr.push_back(i);
    }
}

int main()
{
    vector<int> v;
    v.push_back(10);
}