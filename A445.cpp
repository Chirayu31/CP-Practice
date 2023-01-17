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
    char mp[110][110];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mp[j][i];
            if (mp[j][i] == '.')
            {
                if ((j + i) % 2 == 0)
                    mp[j][i] = 'B';
                else
                    mp[j][i] = 'W';
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            std::cout << mp[j][i];
        std::cout << endl;
    }
}