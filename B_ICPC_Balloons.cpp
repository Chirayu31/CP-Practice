#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool a[26];
        memset(a, 0, sizeof(a));
        int n;
        string s;
        cin >> n >> s;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[s[i] - 'A'])
            {
                ans++;
            }
            else
            {
                ans += 2;
                a[s[i] - 'A'] = true;
            }
        }
        cout << ans << endl;
    }
}