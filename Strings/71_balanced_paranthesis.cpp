#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
    stack<char> stk;
    for (auto itr : s)
    {

        if (itr == '(' || itr == '[' || itr == '{')
        {
            stk.push(itr);
        }
        else
        {
            if (stk.size() == 0)
                return false;
            char ch = stk.top();
            stk.pop();
            if ((itr == ')' and ch == '(') or (itr == '}' and ch == '{') or (itr == ']' and ch == '['))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return stk.empty(); //if true if stack size is empty
}

int main()
{
    string s;
    cin >> s;

    int ans = isBalanced(s);
    if (ans)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}