#include <bits/stdc++.h>
using namespace std;

//one way to do it
//fails if array has same elemets all the copy elements will be inserted
// vector<int> commonEle(int a[], int b[], int c[], int n, int m, int k)
// {
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 v.push_back(a[i]);
//             }
//         }
//     }
//     vector<int> v2;

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < k; j++)
//         {
//             if (v[i] == c[j])
//             {
//                 v2.push_back(v[i]);
//             }
//         }
//     }
//     return v2;
// }

// using hashmaps

vector<int> commonEle(int a[], int b[], int c[], int n, int m, int k)
{
    unordered_map<int, int> m1, m2, m3;
    for (int i = 0; i < n; i++)
    {
        m1[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        m2[b[i]]++;
    }
    for (int i = 0; i < k; i++)
    {
        m3[c[i]]++;
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (m1[a[i]] and m2[a[i]] and m3[a[i]])
        {
            v.push_back(a[i]);
        }
    }
    return v;
}

// not working

// void anotherCommon(int a[], int b[], int c[], int n, int m, int k)
// {
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(a[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         s.insert(b[i]);
//     }
//     for (int i = 0; i < k; i++)
//     {
//         s.insert(c[i]);
//     }

//     for (auto it = s.begin(); it != s.end(); it++)
//         cout << *it << " ";
// }

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m], c[k];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> c[i];
    }

    // vector<int> ans = commonEle(a, b, c, n, m, k);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    vector<int> ans = commonEle(a, b, c, n, m, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // anotherCommon(a, b, c, n, m, k);
}