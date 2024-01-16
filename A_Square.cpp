#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int y1 = INT_MAX, y2 = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        int x, y;
        cin >> x >> y;

        y1 = min(y, y1);
        y2 = max(y2, y);
    }

    int a = y2 - y1;

    return a * a;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << solve() << "\n";
    }

    return 0;
}