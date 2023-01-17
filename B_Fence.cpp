#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n), pf(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pf[i + 1] = v[i] + pf[i];
        // cout << pf[i + 1] << ' ';
    }
    int s = pf[k] - pf[0], ans = 0;
    for (int i = 1; i <= n - k; i++)
    {
        if (pf[k + i] - pf[i] < s)
        {
            s = pf[k + i] - pf[i];
            ans = i;
        }
    }
    cout << ans + 1;
}