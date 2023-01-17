#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    int x = ex - sx, y = ey - sy;

    char chx, chy;

    if (x > 0)
        chx = 'E';
    else
        chx = 'W';
    if (y > 0)
        chy = 'N';
    else
        chy = 'S';
    int count = 0;
    x = abs(x), y = abs(y);
    for (int i = 0; i < t; i++)
    {
        char c = s[i];
        if (c == chx)
            x--;
        if (c == chy)
            y--;
        count++;

        if (x <= 0 && y <= 0)
            break;
    }
    if (x <= 0 && y <= 0 && count <= t)
        cout << count;
    else
        cout << "-1";

    return 0;
}