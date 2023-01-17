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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<char> chk(51, -1);
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (chk[v[i]] == -1)
                chk[v[i]] = s[i];
            else
            {
                if (chk[v[i]] != s[i])
                    ans = false;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}