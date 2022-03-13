#include <bits/stdc++.h>
using namespace std;

void duplicate_and_count(string s)
{
    unordered_map<char, int> map;
    for (int i = 0; i < s.length(); i++)
    {
        map[s[i]]++;
    }
    for (auto it : map)
    {
        if (it.second > 1)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    duplicate_and_count(s);
}