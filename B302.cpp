#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (i > 0)
        {
            v[i] = (a * b) + v[i - 1];
        }
        else
        {
            v[i] = a * b;
        }
    }
    int p = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        while (x > v[p])
            p++;
        cout << p + 1 << endl;
    }
}