#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), pf(100005, 0);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pf[v[i]]++;
        mx = max(mx, v[i]);
    }

    for (int i = 1; i < mx; i++)
        pf[i] += pf[i - 1];

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        if (m >= mx)
            cout << n;
        else
            cout << pf[m];
        cout << endl;
    }
}