#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1, 0), f(n + 1, 0), b(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        f[v[i]] = i;
    }
    int j = 1;
    for (int i = n; i > 0; i--)
    {
        b[v[i]] = j;
        j++;
    }

    int m;
    cin >> m;
    long long a = 0, c = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        a += f[x];
        c += b[x];
    }
    cout << a << " " << c;
}