

#include <bits/stdc++.h>
using namespace std;

string secFreq(string a[], int n)
{
    unordered_map<string, int> map;
    for (int i = 0; i < n; i++)
    {
        map[a[i]]++;
    }
    int largest = INT_MIN;
    string ans = "";
    for (auto it : map)
    {
        if (it.second > largest)
        {
            ans = it.first;
            largest = it.second;
        }
    }
    map[ans] = INT_MIN;

    ans = "";
    largest = INT_MIN;

    for (auto x : map)
    {
        if (x.second > largest)
        {
            ans = x.first;
            largest = x.second;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string ans = secFreq(s, n);
    cout << ans;
}