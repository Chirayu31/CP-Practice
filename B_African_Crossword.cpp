#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c = v[i][j];

            // cout << c << " -> ";
            bool f = true;
            for (int k = 0; k < m; k++)
            {
                if (v[i][k] == c && k != j)
                {
                    // cout << v[i][k];
                    f = false;
                }
            }

            for (int k = 0; k < n; k++)
            {
                if (v[k][j] == c && k != i)
                {
                    // cout << v[k][j];
                    f = false;
                }
            }
            if (f)
                cout << c;
            // cout << endl;
        }
    }
}