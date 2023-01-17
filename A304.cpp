#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int a, b, count;
    for (int i = 1; i <= n; i++)
    {
        a = i;
        for (int j = i; j < n; j++)
        {
            b = j;
            int p = a * a + b * b;
            int sqr = sqrt(p);
            // cout << a << " " << b << " " << p << " " << sqr << endl;
            if (sqr * sqr == p && p <= n * n)
                count++;
        }
    }
    cout << count;
}