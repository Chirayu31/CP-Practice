#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    if (s[0] == '0')
    {
        s = s.substr(1, s.length());
        cout << s;
        return 0;
    }
    int first_zero = -1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && first_zero == -1)
            first_zero = i;
    }

    if (first_zero == -1)
    {
        s = s.substr(1, s.length());
        cout << s;
    }
    else
    {
        s = s.substr(0, first_zero) + s.substr(first_zero + 1, s.length());
        cout << s;
    }
    return 0;
}