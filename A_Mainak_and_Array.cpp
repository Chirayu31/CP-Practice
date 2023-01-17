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

        int ans = v[n - 1] - v[0];

        for (int i = 1; i < n; i++)
        {
            ans = max(v[i - 1] - v[i], ans);
        }
        for (int i = 1; i < n; i++)
        {
            ans = max(v[i] - v[0], ans);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(v[n - 1] - v[i], ans);
        }
        cout << ans << endl;
    }
}