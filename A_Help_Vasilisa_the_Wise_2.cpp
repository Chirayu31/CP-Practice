#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2;

    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == j)
                continue;

            for (int k = 1; k <= 9; k++)
            {
                if (k == j || k == i)
                    continue;
                for (int l = 1; l <= 9; l++)
                {
                    if (l == i || l == j || l == k)
                        continue;

                    if (
                        i + j == r1 && k + l == r2 && i + k == c1 && j + l == c2 && i + l == d1 && j + k == d2)
                    {
                        cout << i << " " << j << endl;
                        cout << k << " " << l;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1;
}