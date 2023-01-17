#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;
        s += s;
        int ans = -1, last = -1;

        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == c && last == -1)
            {
                last = i;
            }
            if (s[i] == 'g' && last != -1)
            {
                // cout << i << " " << last << endl;
                ans = max(ans, i - last);
                last = -1;
            }
        }

        cout << ans << endl;
    }
}