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

        if ((n & (n - 1)) == 0 && n != 1)
        {
            n = n - 1;
        }

        int p = log2(n);
        int x = 1 << p;
        int q = p - 1;
        int y = 1 << q;
        cout << max(n - x + 1, x - y);

        cout << endl;
    }
}