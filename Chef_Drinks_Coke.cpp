#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f;
    cin >> f;

    while (f-- > 0)
    {
        int n, m, k, l, r;

        cin >> n >> m >> k >> l >> r;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int c, p;
            cin >> c >> p;
            if (c > k)
                c = max(c - m, k);

            else if (c < k)
                c = min(c + m, k);

            if (l <= c && c <= r)
                ans = min(ans, p);
        }
        if (ans == INT_MAX)
            ans = -1;

        cout << ans << endl;
        return 0;
    }
}