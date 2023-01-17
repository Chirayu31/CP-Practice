#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        int n;
        cin >> n;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
                f = true;
            if (f && x == 0 && i < n - 1)
            {
                ans++;
            }
            if (i < n - 1 && x > 0)
                ans += x;
        }
        cout << ans << endl;
    }
}