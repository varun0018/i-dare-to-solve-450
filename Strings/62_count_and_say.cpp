#include <bits/stdc++.h>
using namespace std;

string count_and_say(int n)
{
    if (n == 1)
        return "1";
    if (n == 2)
        return "11";
    string ans = "11"; //starting value of ans
    for (int i = 3; i <= n; i++)
    {
        int c = 1;
        ans = ans + '&';
        string temp = "";
        for (int j = 1; j < ans.length(); j++)
        {
            if (ans[j] != ans[j - 1])
            {
                temp = temp + to_string(c);
                temp = temp + ans[j - 1];
                c = 1;
            }
            else
            {
                c++;
            }
        }
        ans = temp;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << count_and_say(n);
}