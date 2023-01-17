#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length();
        int ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] == b[i])
                continue;
            while (i < n && a[i] != b[i])
                i += 2;
            ans++;
        }
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] == b[i])
                continue;
            while (i < n && a[i] != b[i])
                i += 2;
            ans++;
        }
        cout << ans << endl;
    }
}