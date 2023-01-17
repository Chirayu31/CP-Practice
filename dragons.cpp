#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int d_strength = v[i].first;
        int bonus = v[i].second;

        if (s <= d_strength)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            s += bonus;
        }
    }
    cout << "YES";
    return 0;
}