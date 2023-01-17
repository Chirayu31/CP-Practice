#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool f = false;

        for (int i = 0; i < 5; i++)
        {
            if (a < b && a < c && b < d && c < d)
            {
                f = true;
                break;
            }
            int temp = a;
            a = c;
            c = d;
            d = b;
            b = temp;
            // cout << a << " " << b << "\n"
            //      << c << " " << d << "\n";
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}