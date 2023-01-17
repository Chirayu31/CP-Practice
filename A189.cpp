#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int m = n / a, s;

    if (n / b > m)
        m = n / b;
    else if (n / c > m)
        m = n / c;

    if (a + b + c <= n)
        s = 3;
    else if (a + b <= n || b + c <= n || a + c <= n)
        s = 2;
    else if (a <= n || b <= n || c <= n)
        s = 1;
    else
        s = 0;

    cout << max(m, s);
    return 0;
}