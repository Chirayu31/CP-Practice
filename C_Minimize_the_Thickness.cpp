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

        vector<int> v(n), pf(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pf[i + 1] = pf[i] + v[i];
        }

        int ans = n;

        for (int i = 1; i <= n; i++)
        {
            // cout << pf[i] << " ";
            if (pf[i] == 1)
                continue;

            int last = pf[i];
            vector<int> a;
            a.push_back(i);
            bool f = false;

            for (int j = i + 1; j <= n; j++)
            {
                if (pf[j] - last == pf[i])
                {
                    last = pf[j];
                    a.push_back(j);
                    // cout << j << " ";
                    if (j == n)
                        f = true;
                }
            }
            if (a.size() > 1 && f)
            {
                int b = -1;
                for (int i = 1; i < a.size(); i++)
                {
                    if (a[i] - a[i - 1] != 1)
                        b = max(b, a[i] - a[i - 1]);
                }
                if (b != -1)
                    ans = min(b, ans);
            }
            // cout << endl;
        }
        cout << ans;
        cout << endl;
    }
}