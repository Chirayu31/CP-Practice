#include <bits/stdc++.h>
using namespace std;

bool com(pair<int, double> a, pair<int, double> b)
{
    if (a.second == b.second)
        return b.first > a.first;
    return b.second < a.second;
}

int main()
{
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;

    vector<pair<int, double>> ans;

    for (int i = 1; i <= n; i++)
    {
        double a, b;
        cin >> a >> b;

        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        double u = (a * t1 * (100 - k) / 100) + (b * t2);
        double v = (b * t1 * (100 - k) / 100) + (a * t2);

        ans.push_back({i, max(u, v)});
    }

    sort(ans.begin(), ans.end(), com);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i].first << " " << fixed << setprecision(2) << ans[i].second << endl;
    }
}