#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int ans = 1, p = 1;
    while ((k * p) % 10 != 0)
    {
        p++;
    }
    while (((k * ans) % 10) != r)
    {
        ans++;
        if (ans > p)
            break;
    }
    cout << min(p, ans);
}