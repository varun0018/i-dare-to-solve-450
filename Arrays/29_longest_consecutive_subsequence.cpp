#include <bits/stdc++.h>
using namespace std;

//one way of doing it
int longest_subsequence(int a[], int n)
{
    sort(a, a + n);
    vector<int> v;
    v.push_back(a[0]);
    int count = 0;
    int ans = INT_MIN;
    //removing repeated elements
    if (n == 1)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            v.push_back(a[i]);
        }
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        //update maximum in each iteration
        ans = max(ans, count);
    }
    return ans;
}

//efficient approach using sets

int bestAprroach(vector<int> &v)
{
    set<int> s;
    //inserting vector into set
    for (auto i : v)
    {
        s.insert(i);
    }
    int longestStreak = 0;
    for (int num : v)
    {
        //if a num lesser than current ele is present is set
        //if it is not present i donot do anything
        if (!s.count(num - 1))
        { //count checks if a value is present in container of not
            int currentNum = num;
            int currentStreak = 1;

            //here we are checking if next number is present in
            //the container or not
            //if its present then i increment currentStreak
            while (s.count(currentNum + 1))
            {
                currentNum += 1;
                currentStreak += 1;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    cout << bestAprroach(v);
    // cout << longest_subsequence(a, n);
}