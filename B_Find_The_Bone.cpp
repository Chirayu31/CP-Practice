#include <bits/stdc++.h>
using namespace std;
int v[2000000];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v[x] = 1;
    }

    int ans = 1;

    for (int i = 0; i < k; i++)
    {
        int u, x;
        cin >> u >> x;

        if (ans == u && !v[u])
        {
            ans = x;
        }
        else if (ans == x && !v[x])
        {
            ans = u;
        }
    }
    cout << ans;
    return 0;
}