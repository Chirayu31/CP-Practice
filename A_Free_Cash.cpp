#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b, cnt = 1, ma = 1;

    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;

        if (i == 0)
        {
            a = h;
            b = m;
        }

        else
        {
            if (h == a && m == b)
            {
                cnt++;
            }
            else
            {
                a = h, b = m;
                if (cnt > ma)
                    ma = cnt;
                cnt = 1;
            }
            if (cnt > ma)
                ma = cnt;
        }
    }
    cout << ma;
}