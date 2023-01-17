#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    while (n >= 5)
    {
        n -= 5;
        ans++;
    }

    while (n >= 4)
    {
        n -= 4;
        ans++;
    }

    while (n >= 3)
    {
        n -= 3;
        ans++;
    }

    while (n >= 2)
    {
        n -= 2;
        ans++;
    }

    while (n >= 1)
    {
        n -= 1;
        ans++;
    }

    cout << ans;
}