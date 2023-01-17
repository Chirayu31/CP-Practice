#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;

    bool boy = true;
    if (m > n)
        boy = false;
    while (n > 0 && m > 0)
    {
        if (boy)
        {
            cout << "B";
            boy = false;
            n--;
        }

        else
        {
            cout << "G";
            boy = true;
            m--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "B";
    }
    for (int i = 0; i < m; i++)
    {
        cout << "G";
    }
}