#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;

    if (k > n || (k == 1 && n != 1))
    {
        cout << -1;
        return 0;
    }

    if (n == 1)
    {
        cout << "a";
        return 0;
    }

    string s = "";

    for (int i = 0; i < n - k + 2; i++)
    {
        if (i % 2 == 0)
        {
            s += "a";
        }
        else
        {
            s += "b";
        }
    }

    for (int i = 0; i < k - 2; i++)
    {
        char c = 'a' + i + 2;
        s += c;
    }

    cout << s;
}