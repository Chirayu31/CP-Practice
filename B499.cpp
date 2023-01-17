#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;

        if (c.length() <= mp[c].length())
            cout << c << " ";
        else
            cout << mp[c] << " ";
    }

    return 0;
}