#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, k;
        string s;
        cin >> n >> m >> x >> k >> s;

        int e = 0, o = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'E')
                e++;
            else
                o++;
        }
        if (min(e, x * (m / 2)) + min(o, x * ((m + 1) / 2)) >= n)
        {
            cout << "yes";
        }
        else
            cout << "no";
        cout << endl;
    }
}