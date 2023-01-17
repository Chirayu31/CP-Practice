#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int, int>> ps(p), qs(q);

    for (int i = 0; i < p; i++)
        cin >> ps[i].first >> ps[i].second;

    for (int i = 0; i < q; i++)
        cin >> qs[i].first >> qs[i].second;

    int ans = 0;

    for (int i = l; i <= r; i++)
    {
        bool f = false;

        for (int j = 0; j < p; j++)
        {
            int a = ps[j].first, b = ps[j].second;
            for (int k = 0; k < q; k++)
            {
                int c = qs[k].first, d = qs[k].second;
                if (b < c + i || d + i < a)
                {
                    continue;
                }
                else
                {
                    f = true;
                    ans++;
                    break;
                }
            }
            if (f)
                break;
        }
    }

    cout << ans;
}