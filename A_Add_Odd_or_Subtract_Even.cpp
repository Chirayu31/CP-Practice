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
        int diff = b - a;

        if (diff == 0)
            cout << 0;
        else if ((diff > 0 && diff % 2 != 0) || (diff < 0 && abs(diff) % 2 == 0))
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }
        cout << endl;
    }
}