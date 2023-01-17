#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        vector<vector<int>> adj(1010);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            adj[v[i]].push_back(i);
        }
        int ans = -1;

        for (int i = 1; i <= 1000; i++)
        {
            if (adj[i].size() == 0)
                continue;
            for (int j = 1; j <= 1000; j++)
            {
                if (adj[j].size() == 0)
                    continue;
                if (__gcd(i, j) == 1)
                {
                    ans = max(ans, adj[i].back() + adj[j].back());
                }
            }
        }

        cout << ans << endl;
    }
}