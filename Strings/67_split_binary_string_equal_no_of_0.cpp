#include <bits/stdc++.h>
using namespace std;

int split_equal_0_and_1(string s)
{
    int count_of_0 = 0;
    int count_of_1 = 0;
    int substring_with_equal_0_and_1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            count_of_0++;
        }
        else
        {
            count_of_1++;
        }
        if (count_of_0 == count_of_1)
        {
            substring_with_equal_0_and_1++;
        }
    }
    if (count_of_0 != count_of_1)
    {
        return -1;
    }

    return substring_with_equal_0_and_1;
}

int main()
{
    string s;
    cin >> s;
    cout << split_equal_0_and_1(s);
}