#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int y, k, n;
    cin >> y >> k >> n;
    bool found = false;
    for (int i = 1; i <= n / k; i++)
    {
        if ((k * (i)) - y > 0)
        {
            cout << (k * (i)) - y << " ";
            found = true;
        }
    }
    if (!found)
        cout << -1;
    return 0;
}