#include <bits/stdc++.h>
using namespace std;

//using kmp algorithm
bool rotation_of_other_string(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);
    //npos basically means end of the string
    //find is used to find substring in temp
    //here we are trying to find substring s2 in temp till the string is not
    //empty
}

//take two queues and push s1 and s2 in queues respectively
//take first ele of the s2 queue and push it into the last element and check
//if first queue is equal to second queue if yes then return true
//else after all the queue elemets are done pushing back then return false

bool rotatiton_of_not_using_queues(string s1, string s2)
{
    queue<char> q1;
    for (int i = 0; i < s1.length(); i++)
    {
        q1.push(s1[i]);
    }
    queue<char> q2;
    for (int i = 0; i < s2.length(); i++)
    {
        q2.push(s2[i]);
    }
    int t = q2.size();
    while (t--)
    {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if (q2 == q1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // cout << rotation_of_other_string(s1, s2);
    cout << rotatiton_of_not_using_queues(s1, s2);
}