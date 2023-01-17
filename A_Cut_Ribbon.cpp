#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;

    for (int x = 0; x <= n; x++)
    {
        for (int y = 0; y <= n; y++)
        {
            int z = (n - ((a * x) + (b * y))) / c;

            if (((a * x) + (b * y) + (c * z)) == n && z >= 0)
            {
                ans = max(ans, x + y + z);
                // cout << x << " " << y << " " << z << " " << endl;
                ;
            }
        }
    }
    cout << ans;
}