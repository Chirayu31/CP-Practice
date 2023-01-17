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
        vector<int> s(n), f(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cout << f[i] - s[i] << ' ';
            }
            else
            {
                int x = max(f[i - 1], s[i]);
                cout << f[i] - x << ' ';
            }
        }
        cout << endl;
    }
}