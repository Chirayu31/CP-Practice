#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int ans = 1;
    if (s.length() == 1)
        cout << 0;
    else
    {
        int cnt = 0;

        for (int i = 0; i < s.length(); i++)
        {
            cnt += s[i] - '0';
        }

        while (cnt > 9)
        {
            int t = 0;
            while (cnt > 0)
            {
                t += cnt % 10;
                cnt /= 10;
            }
            cnt = t;
            ans++;
        }
        cout << ans;
    }
}