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

        int m = (n + 1) / 2;

        cout << (n + 1) / 2 << endl;

        for (int i = 0; i < m; i++)
        {
            cout << 3 * i + 2 << " " << (3 * n) - (3 * i) << endl;
        }
    }
}