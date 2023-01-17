#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;

                if (i == n - 1)
                    if (c == 'D')
                        cnt++;

                if (j == m - 1)
                    if (c == 'R')
                        cnt++;
            }
        }
        cout << cnt << endl;
    }
}