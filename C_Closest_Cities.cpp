#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> pre(n), suf(n);

    pre[0] = 0, pre[1] = 1;
    suf[n - 1] = 0, suf[n - 2] = 1;

    for (int i = 2; i < n; i++)
    {
        // check for closest city of i-1
        int node = i - 1;
        int left = abs(a[node] - a[node - 1]);
        int right = abs(a[node] - a[node + 1]);

        if (right < left)
        {
            pre[i] = pre[i - 1] + 1;
        }
        else
        {
            pre[i] = pre[i - 1] + right;
        }
    }

    for (int i = n - 3; i >= 0; i--)
    {
        // check for closest city of i-1

        int node = i + 1;
        int left = abs(a[node] - a[node - 1]);
        int right = abs(a[node] - a[node + 1]);

        if (left < right)
        {
            suf[i] = suf[i + 1] + 1;
        }
        else
        {
            suf[i] = suf[i + 1] + left;
        }
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;

        if (x < y)
        {
            cout << abs(pre[y] - pre[x]);
        }
        else
        {
            cout << abs(suf[x] - suf[y]);
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}