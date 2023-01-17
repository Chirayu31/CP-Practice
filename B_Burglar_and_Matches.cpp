#include <bits/stdc++.h>
using namespace std;

bool com(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(m, {0, 0});

    for (int i = 0; i < m; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), com);

    // for (int i = 0; i < m; i++)
    // {
    //     cout << v[i].first << v[i].second;
    // }
    int i = 0, ans = 0;

    while (i < m && n > 0)
    {
        ans += min(n, v[i].first) * v[i].second;
        n -= min(n, v[i].first);
        // cout << n << " ";
        i++;
    }
    cout << ans;
}