#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;

    long long w = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= b)
            w += x;

        if (w > d)
        {
            w = 0;
            ans++;
        }
    }
    cout << ans;
}