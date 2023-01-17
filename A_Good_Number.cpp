#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(10, 0);

        int x;
        cin >> x;

        while (x != 0)
        {
            v[x % 10] = 1;
            x /= 10;
        }
        bool f = true;
        for (int j = 0; j <= k; j++)
        {
            if (!v[j])
            {
                f = false;
            }
        }
        if (f)
            ans++;
    }
    cout << ans;
}