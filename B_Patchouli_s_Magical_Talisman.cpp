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
        int odd = 0, even = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0)
        {
            int mini = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int m = 0;
                int x = v[i];
                while (x % 2 == 0)
                {
                    x = x / 2;
                    m++;
                }
                mini = min(m, mini);
            }
            cout << mini + even - 1 << endl;
        }
        else
        {
            cout << even << endl;
        }
    }
}