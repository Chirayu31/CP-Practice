#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    char c;
    cin >> n >> m >> c;

    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            // cout << v[i][j];
        }
        // cout << endl;
    }

    set<char> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == c)
            {
                if (i - 1 >= 0)
                    if (v[i - 1][j] != '.' && v[i - 1][j] != c)
                    {
                        s.insert(v[i - 1][j]);
                        // cout << v[i - 1][j] << " gf ";
                    }
                if (i + 1 < n)
                    if (v[i + 1][j] != '.' && v[i + 1][j] != c)
                    {
                        s.insert(v[i + 1][j]);
                        // cout << v[i + 1][j] << "df ";
                    }

                if (j - 1 >= 0)
                    if (v[i][j - 1] != '.' && v[i][j - 1] != c)
                    {
                        s.insert(v[i][j - 1]);
                        // cout << v[i][j - 1] << "hg ";
                    }

                if (j + 1 < m)
                    if (v[i][j + 1] != '.' && v[i][j + 1] != c)
                    {
                        s.insert(v[i][j + 1]);
                        // cout << v[i][j + 1] << "ss ";
                    }
            }
        }
    }

    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it;
    // }

    cout << s.size();
}