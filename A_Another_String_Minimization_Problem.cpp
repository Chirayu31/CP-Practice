#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        string s = "";
        for (int i = 0; i < m; i++)
            s += "B";

        for (int i = 0; i < n; i++)
        {
            int x = v[i] - 1;
            int y = (m + 1 - v[i]) - 1;
            if (x <= y)
            {
                if (s[x] == 'B')
                    s[x] = 'A';
                else
                    s[y] = 'A';
            }
            else
            {
                if (s[y] == 'B')
                    s[y] = 'A';
                else
                    s[x] = 'A';
            }
        }
        cout << s << endl;
    }
}