// Check if the given string is shuffled substring of another string
#include <bits/stdc++.h>
using namespace std;

bool valid_shuffle_of_substring_not(string s1, string s2)
{
    int size_of_s1 = s1.length();
    int size_of_s2 = s2.length();
    //here we ought to check if s1 is a substring of s2
    //if size of s1>s2 then it can never be a valid substring
    if (size_of_s1 >= size_of_s2)
    {
        return false;
    }
    else
    {
        sort(s1.begin(), s1.end());

        //traverse s2 bigger string we need to match with s1
        for (int i = 0; i < size_of_s2; i++)
        {
            if (i + size_of_s1 - 1 > size_of_s2)
                return false;

            string str = ""; //string to copy substrings of s2
            for (int j = 0; j < size_of_s1; j++)
            {
                str.push_back(s2[i + j]);
            }

            sort(str.begin(), str.end());
            if (str == s1)
            {
                return true;
            }
        }
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool ans = valid_shuffle_of_substring_not(s1, s2);
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}