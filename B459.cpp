#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long n;
    cin >> n;
    long long mn = LONG_LONG_MAX, mx = 0, c_min = 0, c_max = 0;
    long long *arr = new long long(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    for (long long i = 0; i < n; i++)
    {
        c_min += (arr[i] == mn);
        c_max += (arr[i] == mx);
    }

    cout << mx - mn << " ";

    if (mx == mn)
        cout << n * (n - 1) / 2;
    else
        cout << c_min * c_max;
    return 0;
}