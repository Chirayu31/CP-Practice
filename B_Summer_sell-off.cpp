#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b)
{
    return min(2 * a.first, a.second) - min(a.first, a.second) > min(2 * b.first, b.second) - min(b.first, b.second);
}

int main()
{
    int n, f;
    cin >> n >> f;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), comparator);
    long long ans = 0;

    for (int i = 0; i < f; i++)
    {
        ans += min(2 * v[i].first, v[i].second);
    }

    for (int i = f; i < n; i++)
        ans += min(v[i].first, v[i].second);

    cout << ans;
}