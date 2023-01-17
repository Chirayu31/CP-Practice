#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double d, u;
        int n;
        cin >> d >> u >> n;
        double cost = d * u;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            double m, r, c;
            cin >> m >> r >> c;

            double cost2 = (c / m) + (r * u);
            if (cost2 < cost)
            {
                cost = cost2;
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
}