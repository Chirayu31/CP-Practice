#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        vector<int> v(n);
        vector<pair<int, int>> cnt(l, make_pair(0, 0));

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            int p = 0;
            while (p != l)
            {
                if (x & 1)
                    cnt[p].second++;
                else
                    cnt[p].first++;
                x = x >> 1;
                p++;
            }
        }

        int res = 0;
        int base = 1;
        for (int i = 0; i < l; i++)
        {
            if (cnt[i].first >= cnt[i].second)
            {
                res += 0 * (base);
            }
            else
                res += 1 * (base);
            base *= 2;
        }
        cout << res << endl;
    }
}