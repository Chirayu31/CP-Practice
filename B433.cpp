#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int maxn = 100010;
    int n;
    cin >> n;
    long long a[maxn], b[maxn];

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[i] = b[i] = x;
    }

    sort(b + 1, b + n + 1);

    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i] + a[i - 1];
        b[i] = b[i] + b[i - 1];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << a[r] - a[l - 1] << endl;
        else
            cout << b[r] - b[l - 1] << endl;
    }

    return 0;
}