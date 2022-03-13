#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(56);
    v.push_back(67);
    v.push_back(30);
    v.push_back(79);

    sort(v.begin(), v.end());
    int size = v.size();
    int middle = size / 2;
    if (size % 2 != 0)
    {

        cout << v[middle];
    }
    else
    {
        int first = middle;
        int second = middle - 1;

        cout << (v[first] + v[second]) / 2;
    }
}