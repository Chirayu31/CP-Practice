#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unsigned long long a, b, d, p, ans;
        p = pow(10, n);
        cin >> a;
        cout << a + (2 * p);
        cin >> b;
        cout << p - b;
        cin >> d;
        cout << p - d;
        cin >> ans;
        if (ans == -1)
            return 0;
    }
}