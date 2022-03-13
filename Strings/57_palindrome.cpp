#include <iostream>
using namespace std;

string palindromeOrNot(string s)
{
    int l = 0, e = s.length() - 1;
    while (l < e)
    {
        if (s[l] != s[e])
        {
            return "Not Palindrome";
        }
        l++;
        e--;
    }
    return "True";
}

int main()
{
    string s;
    cin >> s;
    cout << palindromeOrNot(s);
}