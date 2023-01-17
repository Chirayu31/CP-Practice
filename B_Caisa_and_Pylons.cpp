#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0, energy = 0;

    ans += v[0];
    for (int i = 1; i < n; i++)
    {
        while (v[i - 1] - v[i] + energy < 0)
        {
            v[i - 1]++;
            ans++;
        }
        energy += v[i - 1] - v[i];
    }
    cout << ans;
}