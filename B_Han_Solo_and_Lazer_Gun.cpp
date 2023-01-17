#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<pair<pair<int, int>, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].F.F >> v[i].F.S;
        v[i].S = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].S == 0)
        {
            ans++;
            v[i].S = 1;
            for (int j = 0; j < n; j++)
            {
                int p = (v[i].F.F - x) * (v[j].F.S - y);
                int q = (v[j].F.F - x) * (v[i].F.S - y);
                if (p == q)
                {
                    v[j].S = 1;
                }
            }
        }
    }
    cout << ans;
}