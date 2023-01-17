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
        vector<int> a(n + 2);
        vector<int> b(n + 2);

        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        a[0] = 0;
        b[n + 1] = 0;

        for (int i = 1; i <= n; i++)
        {
            a[i] += a[i - 1];
        }

        for (int i = n; i >= 1; i--)
        {
            b[i] += b[i + 1];
        }

        int profit = 0;

        for (int i = 0; i <= n; i++)
        {
            profit = max(profit, a[i] + b[i + 1]);
        }
        cout << profit << endl;
    }
}