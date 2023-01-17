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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    if (sum % n == 0)
    {
        cout << n;
    }
    else
    {
        if (n % 2 == 0)
            cout << n - (sum / n);
        else
            cout << n - (sum / n) + 1;
    }
}