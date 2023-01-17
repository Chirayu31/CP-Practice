#include <bits/stdc++.h>
using namespace std;
int v[5005];
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            ans++;
        }
    }
    cout << ans;
}