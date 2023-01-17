#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].first == v[j].second)
                ans++;
            if (v[i].second == v[j].first)
                ans++;
        }
    }
    cout << ans;
}