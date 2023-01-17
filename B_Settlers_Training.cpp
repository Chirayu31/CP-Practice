#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;

    while (v[0] != k)
    {
        for (int i = 0; i < n - 1; i++)
            if (v[i] != v[i + 1] && v[i] < k)
                v[i]++;

        if (v[n - 1] < k)
            v[n - 1]++;

        ans++;
    }

    cout << ans;
}