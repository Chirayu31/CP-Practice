#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll l = 0, r = 1;

        for (int i = 1; i <= n; i++)
        {
            ll f = 2 * l + r;
            l = r;
            r = f;
        }

        ll g = gcd(l, 1 << n);
        cout << (l / g) << " " << ((1 << n) / g) << " ";
    }
}