#include <bits/stdc++.h>
using namespace std;

/*
create a map then push all the ele of both the array to map
if  mp[a[i]] means pushing an ele to map and mp[a[i]]++ means increasing the count
of the map of second int (mp[a[i]]++)
now map has all the diffrent occurences of the array like

85 - 2
25 - 1
2 - 1
32 - 1
54 - 1
6 - 1

so if we return the size of the map then we get the number of unions


*/

int union_of_array(int a[], int b[], int n, int m)
{

    // unordered_map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    //     mp[a[i]]++;
    // }

    // for (int j = 0; j < m; j++)
    // {
    //     cin >> a[j];
    //     mp[b[j]]++;
    // }

    // return mp.size();
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}

/*
loop through entire array if 
if a[that index]==b[any index of the array] print the value and break
*/

void intersection_of_array(int a[], int b[], int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int n;
    int m;
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

    // if (n > m)
    // {
    //     k = n;
    // }
    // else
    // {
    //     k = m;
    // }

    cout << union_of_array(a, b, n, m);
    // intersection_of_array(a, b, n, m);
}