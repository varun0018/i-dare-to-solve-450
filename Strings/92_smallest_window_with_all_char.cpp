#include <bits/stdc++.h>
using namespace std;

int smallest_window_with_all_char(string s)
{
    int size_of_str = s.length();
    set<char> st;
    unordered_map<char, int> map;
    for (int i = 0; i < size_of_str; i++)
    {
        st.insert(s[i]);
    }
    int no_of_unique_ele = st.size();

    int i = 0;
    int j = 1;
    map[s[i]]++;
    int min_count = INT_MAX;
    int count = 1;

    while (i <= j and j < size_of_str)
    {
        if (count < no_of_unique_ele)
        {
            if (map[s[j]] == 0)
            {
                count++;
                map[s[j]]++;
                j++;
            }
        }
        else if (count == no_of_unique_ele)
        {
            min_count = min(min_count, j - i);
            if (map[s[i]] == 1)
                count--;
            map[s[i]]--;
            i++;
        }
    }
    while (count == no_of_unique_ele)
    {
        min_count = min(min_count, j - i);
        if (map[s[i]] == 1)
            count--;
        map[s[i]]--;
        i++;
    }
    return min_count;
}

int main()
{
    string s;
    cin >> s;
    cout << smallest_window_with_all_char(s);
}