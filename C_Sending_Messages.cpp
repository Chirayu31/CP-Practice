#include <bits/stdc++.h>
using namespace std;

string solve()
{
    long long n, f, a, b;
    cin >> n >> f >> a >> b;

    vector<int> m(n + 1);
    m[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }

    for (long long i = 1; i < n + 1; i++)
    {
        f -= min(a * (m[i] - m[i - 1]), b);
    }

    if (f <= 0)
        return "NO";

    return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
}