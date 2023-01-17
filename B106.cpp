#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<vector<int>> v;
    vector<bool> out(n);

    for (int i = 0; i < n; i++)
    {
        vector<int> toPush;
        for (int j = 0; j < 4; j++)
        {
            int x;
            cin >> x;
            toPush.push_back(x);
        }
        v.push_back(toPush);
    }

    for (int i = 0; i < n; i++)
    {
        int a = v[i][0], b = v[i][1], c = v[i][2];

        for (int j = 0; j < n; j++)
        {
            int x = v[j][0], y = v[j][1], z = v[j][2];
            if (a < x && b < y && c < z)
                out[i] = true;
        }
    }
    int min_cost = INT_MAX, pos = -1;
    for (int i = 0; i < n; i++)
    {
        int cost = v[i][3];
        if (cost < min_cost && out[i] == false)
        {
            min_cost = cost;
            pos = i;
        }
    }
    cout << pos + 1;
}