#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n;
    double max_r1 = -1, min_p2 = 5001;

    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        max_r1 = max(max_r1, x);
    }
    // cout << max_r1;

    cin >> m;
    vector<double> p1(m);
    for (int i = 0; i < m; i++)
    {
        cin >> p1[i];
    }

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        double x;
        cin >> x;
        min_p2 = min(min_p2, x);
    }
    // cout << min_p2;

    double a, b;
    cin >> a >> b;

    double max_r2 = -1000000000;

    for (int i = 0; i < m; i++)
    {
        max_r2 = max(max_r2, sqrt((b * p1[i] * max_r1 * max_r1) / ((a * min_p2) + (b * p1[i]))));
    }
    cout << fixed << setprecision(9) << max_r2;
}