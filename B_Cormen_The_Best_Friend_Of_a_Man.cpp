#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + v[i + 1] < k)
        {
            ans += k - (v[i] + v[i + 1]);
            v[i + 1] += k - (v[i] + v[i + 1]);
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}