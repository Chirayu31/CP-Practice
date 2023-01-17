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
    bool strictly_greater = true, strictly_lesser = true;

    sort(s.begin(), s.begin() + n);
    sort(s.begin() + n, s.end());

    for (int i = 0; i < n; i++)
    {
        if (!(s[i] > s[i + n]))
            strictly_greater = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!(s[i] < s[i + n]))
            strictly_lesser = false;
    }

    if (strictly_greater || strictly_lesser)
        cout << "YES";
    else
        cout << "NO";
}