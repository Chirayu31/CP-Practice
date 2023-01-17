#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int value = 0;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        value += r - l + 1;
    }

    if (value % k == 0)
        cout << 0;
    else
        cout << k - (value % k);
}