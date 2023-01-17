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
    int upper_sum = 0, lower_sum = 0, upper_odd_count = 0, lower_odd_count = 0;
    bool odd_even_pair = false;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        upper_sum += a;
        lower_sum += b;

        if (a % 2 != 0)
            upper_odd_count++;
        if (b % 2 != 0)
            lower_odd_count++;

        if ((a + b) % 2 != 0)
            odd_even_pair = true;
    }

    if (upper_sum % 2 == 0 && lower_sum % 2 == 0)
    {
        cout << 0;
    }
    else if (upper_sum % 2 != 0 && lower_sum % 2 == 0)
    {
        cout << -1;
    }
    else if (upper_sum % 2 == 0 && lower_sum % 2 != 0)
    {
        cout << -1;
    }
    else if (upper_sum % 2 != 0 && lower_sum % 2 != 0)
    {
        if ((lower_odd_count < n || upper_odd_count < n) && odd_even_pair)
            cout << 1;
        else
            cout << -1;
    }
    return 0;
}