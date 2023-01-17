#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        int oa = 0, ob = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                oa++;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
            {
                ob++;
            }
        }
        int d = abs(ob - oa);
        int ans = 0;

        if (oa > ob)
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] == 0 && a[i] == 1 && d)
                {
                    a[i] = 0;
                    ans++;
                    d--;
                }
            }
        }
        if (ob > oa)
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] == 1 && a[i] == 0 && d)
                {
                    a[i] = 1;
                    ans++;
                    d--;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] != a[i])
            {
                ans++;
                break;
            }
        }
        cout << ans;
        cout << endl;
    }
}