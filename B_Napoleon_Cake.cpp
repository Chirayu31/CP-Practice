#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a[200005], b[200005];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            b[i] = 0;
            cin >> a[i];
            a[i] = i - a[i] + 1;
        }
        int mina = a[n];
        for (int j = n; j >= 1; j--)
        {
            mina = min(mina, a[j]);
            if (mina <= j)
                b[j] = 1;
        }
        for (int i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}