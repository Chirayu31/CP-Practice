#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int ans = 0, last = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= last)
        {
            ans++;
            last++;
        }
    }
    cout << ans;
}