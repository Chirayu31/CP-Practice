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

    int max1 = 0, min1 = 101, min2 = 101;

    for (int i = 0; i < n; i++)
    { //correct pass
        int x;
        cin >> x;
        if (x > max1)
            max1 = x;

        if (x < min1)
            min1 = x;
    }

    for (int i = 0; i < m; i++)
    { //wrong pass
        int x;
        cin >> x;

        if (x < min2)
            min2 = x;
    }

    int tl = max1;

    if (min2 - max1 <= 0)
        cout << -1;
    else
    {
        while (2 * min1 > tl)
        {
            tl++;
        }

        if (tl >= min2)
            cout << -1;
        else
            cout << tl;
    }
}