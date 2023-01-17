#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int max = -1;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > max)
            max = it->second;
    }

    if (max <= (n + 1) / 2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}