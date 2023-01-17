#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(3, vector<int>(3));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];
    }

    for (int i = 0; i < 100001; i++)
    {
        int x = v[1][0] + i + v[1][2] - v[0][1] - v[0][2];
        int z = v[0][2] + v[2][0] - x;
        if (z < 0 || x < 0)
            continue;
        else if ((x + v[0][1] + v[0][2]) == (i + v[1][0] + v[1][2]) && (x + v[0][1] + v[0][2]) == (z + v[2][0] + v[2][1]))
        {
            v[0][0] = x;
            v[1][1] = i;
            v[2][2] = z;
            break;
        }
        else
            continue;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}