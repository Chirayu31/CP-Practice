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

    vector<string> s;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string x = s[i];
        int count = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (x == s[j])
                count++;
        }
        ans = max(count, ans);
    }
    cout << ans;
}