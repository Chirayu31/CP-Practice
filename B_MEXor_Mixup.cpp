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
        int xor1 = 0;

        if ((a - 1) % 4 == 0)
            xor1 = a - 1;
        if ((a - 1) % 4 == 1)
            xor1 = 1;
        if ((a - 1) % 4 == 2)
            xor1 = a;
        if ((a - 1) % 4 == 3)
            xor1 = 0;

        int c = b ^ xor1;

        if (xor1 == b)
        {
            cout << a;
        }
        else
        {
            if (c == a)
            {
                cout << a + 2;
            }
            else
                cout << a + 1;
        }
        cout << endl;
    }
}