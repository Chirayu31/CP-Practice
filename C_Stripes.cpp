#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> v(8, vector<char>(8));

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> v[i][j];
            }
        }
        bool r = false;
        for (int i = 0; i < 8; i++)
        {
            int cnt_r = 0;
            for (int j = 0; j < 8; j++)
            {
                if (v[i][j] == 'R')
                {
                    cnt_r++;
                }
            }
            if (cnt_r == 8)
            {
                r = true;
            }
        }
        if (r)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }
}