#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> v(n), p(n, 0), pf(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            pf[i + 1] = pf[i] + v[i];
        }

        // for (int i = 0; i <= n; i++)
        // {
        //     // pf[i + 1] = pf[i] + v[i];
        //     cout << pf[i] << " ";
        // }

        p[0] = v[0];
        // cout << v[0] << " ";
        for (int i = 1; i < n; i++)
        {
            p[i] = max(p[i - 1], v[i]);
            // cout << p[i] << " ";
        }

        while (q--)
        {
            int k;
            cin >> k;

            int x = upper_bound(p.begin(), p.end(), k) - p.begin();
            cout << pf[x] << " ";
        }
        cout << endl;
    }
}