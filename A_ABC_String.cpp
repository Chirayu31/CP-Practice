#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> v(3);
        int x = s[0] - 'A';
        int y = s[s.length() - 1] - 'A';
        if (x == y)
        {
            cout << "NO";
            cout << "\n";

            continue;
        }
        v[x] = 1, v[y] = -1;

        if (count(s.begin(), s.end(), 'A' + x) == s.length() / 2)
            v[3 ^ x ^ y] = -1;
        else
            v[3 ^ x ^ y] = 1;
        int bal = 0;
        bool f = true;
        for (char c : s)
        {
            bal += v[c - 'A'];
            if (bal < 0)
            {
                f = false;
            }
        }

        if (bal != 0)
            f = false;
        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
}