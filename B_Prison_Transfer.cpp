#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, c;
    cin >> n >> t >> c;

    int ans = 0, l = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= t)
        {
            l++;
        }
        else
        {
            l = 0;
        }
        if (l >= c)
            ans++;
    }
    cout << ans;
}