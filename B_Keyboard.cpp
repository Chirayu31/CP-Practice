#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;

    vector<vector<pair<int, int>>> d(26);
    vector<pair<int, int>> s;
    vector<long long> dis(26, INT_MAX);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'S')
                s.push_back({i, j});
            else
            {
                d[c - 'a'].push_back({i, j});
            }
        }

    int q;
    cin >> q;
    string str;
    cin >> str;
    int ans = 0;

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < d[i].size(); j++)
        {
            for (int k = 0; k < s.size(); k++)
            {
                long long f = ((d[i][j].first - s[k].first) * (d[i][j].first - s[k].first)) + ((d[i][j].second - s[k].second) * (d[i][j].second - s[k].second));

                dis[i] = min(dis[i], f);

                // cout << d[i][j].first << " " << d[i][j].second << " " << s[k].first << " " << s[k].second << " " << dis[i] << " " << endl;
            }
        }
    }

    // for (int i = 0; i < 26; i++)
    //     cout << dis[i] << " ";

    for (int i = 0; i < q; i++)
    {
        char c = str[i];

        if (c >= 'a' && c <= 'z')
        {
            if (!d[c - 'a'].size())
            {
                ans = -1;
                break;
            }
        }
        else
        {
            if (!d[c - 'A'].size() || !s.size())
            {
                ans = -1;
                break;
            }
            else
            {
                if (dis[c - 'A'] > p * p)
                    ans++;
            }
        }
    }
    cout << ans;
}
