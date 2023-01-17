#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;

    vector<int> v(n, 0);
    a--;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;

    if (v[a])
        ans++;

    int i = a - 1, j = a + 1;

    while (i >= 0 && j < n)
    {
        if (v[i] == v[j] && v[i] == 1)
        {
            ans += 2;
            // cout << i << ' ' << j << " ";
        }
        i--;
        j++;
    }

    while (i >= 0)
    {
        if (v[i] == 1)
        {
            ans++;
            // cout << i << " i ";
        }
        i--;
    }
    while (j < n)
    {
        if (v[j] == 1)
        {
            ans++;
            // cout << j << " j ";
        }
        j++;
    }
    cout << ans;
}