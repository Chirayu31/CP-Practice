#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool col1 = true, chk = true;
    char one = v[0][0], two = v[0][1];

    for (int i = 0; i < n; i++)
    {

        if (v[i][i] != v[i][n - i - 1] || v[i][i] != one)
        {
            col1 = false;
            // cout << v[i][i] << " " << v[i][n - i - 1] << " ";
        }
        for (int j = 0; j < n; j++)
        {
            if (j != i && j != n - i - 1)
            {
                if (v[i][j] != two)
                    chk = false;
            }
        }
    }

    if (col1 && one != two && chk)
        cout << "YES";
    else
        cout << "NO";
}