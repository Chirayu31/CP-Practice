#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << endl;
        }
    }
}