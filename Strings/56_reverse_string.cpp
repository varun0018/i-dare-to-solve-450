#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s)
{
    int low = 0, high = s.length() - 1;
    while (low < high)
    {
        swap(s[low], s[high]);
        low++;
        high--;
    }
}

int main()
{
    string s;
    cin >> s;
    reverseString(s);
    cout << s;
}