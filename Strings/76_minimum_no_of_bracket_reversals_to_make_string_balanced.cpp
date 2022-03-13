#include <bits/stdc++.h>
using namespace std;

// int minimum_no_of_bracket_reversals_to_make_string_balanced(string s)
// {
//     int n = s.length();
//     if (n & 1) //& returns the last bit of a number
//     //only odd number contains last bit
//     //if checks if last bit is present or not

//     {
//         return -1;
//     }
//     // if (n % 2 != 0)
//     // {
//     //     return -1;
//     // }

//     stack<char> st;

//     for (int i = 0; i < n; i++)
//     {
//         //if its an closing '}' bracket then i need to check if stack top is an { bracket
//         //if so then i just need to pop that { cause they will be already balanced
//         //else i just push } into the stack
//         if (s[i] == '}' && !st.empty())
//         {
//             if (st.top() == '{')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.push(s[i]);
//             }
//         }
//         //if its an open bracket then i just need to push in stack
//         else
//         {
//             st.push(s[i]);
//         }
//     }

//     int size_of_stack = st.size();

//     int open_bracket_count = 0;
//     while (!st.empty() && st.top() == '{')
//     {
//         st.pop();
//         open_bracket_count++;
//     }
//     return (size_of_stack / 2 + open_bracket_count % 2);
// }

int minimum_no_of_bracket_reversals_to_make_string_balanced(string s)
{
    int n = s.length();
    if (n & 1) //& returns the last bit of a number
    //only odd number contains last bit
    //if checks if last bit is present or not

    {
        return -1;
    }
    // if (n % 2 != 0)
    // {
    //     return -1;
    // }
    int size_of_stack = 0;
    int c = 0;
    int c1 = 0;
    int open_bracket_count = 0;

    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        //if its an closing '}' bracket then i need to check if stack top is an { bracket
        //if so then i just need to pop that { cause they will be already balanced
        //else i just push } into the stack
        char ch = s[i];
        if (ch == '{')
        {
            st.push(ch);
            c1++;
        }
        else if (ch == '}' and !st.empty() and st.top() == '{')
        {
            st.pop();
            c1--;
        }
        else
            c++;
    }

    if (c & 1)
        c == (c / 2) + 1;
    else
        c = c / 2;
    if (c1 & 1)
        c1 = (c1 + 1) / 2;
    else
        c1 = c1 / 2;
    return c + c1;
}

int main()
{
    string s;
    cin >> s;
    cout << minimum_no_of_bracket_reversals_to_make_string_balanced(s);
}