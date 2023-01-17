#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    string s;
    cin >> n >> s;
    int ones = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
        else
            zeros++;
    }

    cout << abs(zeros - ones);
    return 0;
}