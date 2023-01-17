#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    vector<int> v(n + 1, 0);

    for (int i = 1; i <= n - 1; i++)
    {
        v[i] = v[i - 1] + (s[i] == s[i - 1]);
    }

    // for (int i = 0; i <= n; i++)
    //     cout << v[i];

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << v[r - 1] - v[l - 1] << endl;
    }
}