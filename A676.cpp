#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, min_pos, max_pos, max_diff = -1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            min_pos = i;
        if (x == n)
            max_pos = i;
    }

    max_diff = abs(max_pos - min_pos);

    if (abs(max_pos - 0) > max_diff)
    {
        max_diff = abs(max_pos - 0);
    }
    if (abs(min_pos - 0) > max_diff)
    {
        max_diff = abs(min_pos - 0);
    }
    if (abs(max_pos - n + 1) > max_diff)
    {
        max_diff = abs(max_pos - n + 1);
    }
    if (abs(min_pos - n + 1) > max_diff)
    {
        max_diff = abs(min_pos - n + 1);
    }

    cout << max_diff;
}