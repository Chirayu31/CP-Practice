#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a][b] = c;
    }

    for (int p = 0; p < n; p++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k <= n; k++)
                {
                    if (v[i][j] > 0 && v[j][k] > 0)
                    {
                        int delta = min(v[i][j], v[j][k]);
                        v[i][j] -= delta;
                        v[j][k] -= delta;
                        v[i][k] += delta;
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ans += v[i][j];
        }
    }
    cout << ans;
}