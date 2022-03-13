#include <bits/stdc++.h>
using namespace std;

bool isomorphic_or_not(string s1, string s2)
{
    set<char> set1;
    set<char> set2;
    for (int i = 0; i < s1.length(); i++)
    {
        set1.insert(s1[i]);
    }
    for (int i = 0; i < s2.length(); i++)
    {
        set2.insert(s2[i]);
    }

    // for (auto it : set1)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // for (auto it : set2)
    // {
    //     cout << it << " ";
    // }
    return (set1.size() == set2.size());
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool ans = isomorphic_or_not(s1, s2);
    if (ans)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}