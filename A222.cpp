#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, last = 0, continuos = 1, a;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == last)
            continuos++;
        else
            continuos = 1;
        last = a;
    }

    if (continuos + k > n)
    {
        cout << n - continuos;
    }
    else
        cout << -1;
    return 0;
}