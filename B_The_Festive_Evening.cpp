#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    map<char, int> mp;
    set<char> active;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        active.insert(s[i]);
        if (active.size() > k)
        {
            cout << "YES";
            return 0;
        }
        if (mp[s[i]] == i)
        {
            active.erase(s[i]);
        }
    }
    cout << "NO";
    return 0;
}