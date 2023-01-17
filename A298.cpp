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
    string s;
    cin >> s;
    int lastR = -1, firstL = -1, firstR = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            lastR = i;
            if (firstR == -1)
                firstR = i;
        }
        if (s[i] == 'L' && firstL == -1)
        {
            firstL = i;
        }
    }
    if (firstR == -1)
    {
        cout << firstL + 1 << " " << firstL;
    }
    else if (firstL == -1)
    {
        cout << firstR + 1 << " " << lastR + 2;
    }
    else
    {
        cout << firstR + 1 << " " << firstL;
    }
}