#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int m[5], w[5], h[2];
    double total = 0;
    cin >> m[0] >> m[1] >> m[2] >> m[3] >> m[4];
    cin >> w[0] >> w[1] >> w[2] >> w[3] >> w[4];
    cin >> h[0] >> h[1];

    for (int i = 0; i < 5; i++)
    {
        double formula = ((1 - (double)m[i] / 250) * (i + 1) * 500) - 50 * w[i];
        total += max(((double)0.3 * (i + 1) * 500), formula);
        }

    total += h[0] * 100;
    total -= h[1] * 50;

    cout << (int)total;
}