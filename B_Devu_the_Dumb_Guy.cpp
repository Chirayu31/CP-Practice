#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    long long ans = 0;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        ans += x * v[i];
        if (x > 1)
            x--;
    }

    cout << ans;
}