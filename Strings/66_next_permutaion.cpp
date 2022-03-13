#include <bits/stdc++.h>
using namespace std;

//using stl
vector<string> nextPermutation(string s)
{
    vector<string> ans;
    sort(s.begin(), s.end());
    ans.push_back(s);
    while (next_permutation(s.begin(), s.end()))
    {
        ans.push_back(s);
    }
    return ans;
}

/*
start looping from back
for first index where a[i]<a[i+1]

start looping again form back 
swap closet greater integer with the elemnt found in first iteration

then reverse all the elements greater than a[i] found in first iteration


*/

void nextPermutation1(string s, int l, int r)
{
    if (l == r) //base case if first index(l) is equal to least index(r)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            nextPermutation1(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    // string s;
    // cin >> s;
    // vector<string> ans;
    // ans = nextPermutation(s);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    string s;
    cin >> s;
    nextPermutation1(s, 0, s.length() - 1);
}