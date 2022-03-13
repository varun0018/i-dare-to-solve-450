#include <bits/stdc++.h>
using namespace std;

int min_no_of_flips_to_make_binary_string_alternate(string s)
{
    int first_possibility = 0, second_possibility = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i & 1 && s[i] == '0')
            first_possibility++;
        if (i % 2 == 0 && s[i] == '1')
            first_possibility++;
        if (i & 1 && s[i] == '1')
            second_possibility++;
        if (i % 2 == 0 && s[i] == '0')
            second_possibility++;
    }
    return min(first_possibility, second_possibility);
}

int main()
{
    string s;
    cin >> s;
    cout << min_no_of_flips_to_make_binary_string_alternate(s);
}