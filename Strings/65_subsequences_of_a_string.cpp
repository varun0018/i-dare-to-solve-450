#include <iostream>
using namespace std;

void subsequences(string s, int i, string ans)
{
    if (i == s.length())
    {
        cout << ans << endl;
    }
    else
    {
        subsequences(s, i + 1, ans);

        subsequences(s, i + 1, ans + s[i]);
    }
}

void subsequence2(string input, string ans)
{
    if (input.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    subsequence2(input.substr(1), ans);
    subsequence2(input.substr(1), ans + input[0]);
}

int main()
{
    string s;
    cin >> s;

    subsequence2(s, "");
}