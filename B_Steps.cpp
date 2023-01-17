#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, k;
    cin >> n >> m >> x >> y >> k;

    long long ans = 0;

    for (int i = 0; i < k; i++)
    {
        int xx, yy, l, r;
        cin >> xx >> yy;

        if (xx > 0)
        {
            l = (n - x) / xx;
        }
        else if (xx < 0)
        {
            l = (x - 1) / -xx;
        }
        else
            l = n + m;

        if (yy > 0)
        {
            r = (m - y) / yy;
        }
        else if (yy < 0)
        {
            r = (y - 1) / -yy;
        }
        else
            r = n + m;
        l = min(l, r);
        x += xx * l;
        y += yy * l;
        ans += l;
    }
    cout << ans;
}