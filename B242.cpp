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
    vector<vector<int>> v;
    int min_l = INT_MAX, max_r = -1;
    for (int i = 0; i < n; i++)
    {
        vector<int> pair;
        int l, r;
        cin >> l >> r;
        if (l < min_l)
            min_l = l;
        if (r > max_r)
            max_r = r;
        pair.push_back(l);
        pair.push_back(r);
        v.push_back(pair);
    }

    // cout << min_l << " " << max_r;
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] == min_l && v[i][1] == max_r)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}