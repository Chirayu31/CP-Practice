#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n), pf(n + 1, 0), sorted(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pf[i + 1] = pf[i] + v[i];
        // cout << pf[i + 1] << " ";
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        sorted[i + 1] = sorted[i] + v[i];
        // cout << sorted[i + 1] << " ";
    }

    int m;
    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << pf[r] - pf[l - 1] << endl;
        }
        else
        {
            cout << sorted[r] - sorted[l - 1] << endl;
        }
    }
}