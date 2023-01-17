#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n, m, c;
        cin >> n >> m >> c;

        if (n == 0 && m == 0 && c == 0)
            return 0;

        n /= 8;
        m /= 8;

        if (c)
            cout << n * m;
        else
            cout << n * m - 1;
        cout << endl;
    }
}