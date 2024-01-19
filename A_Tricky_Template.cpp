#include <bits/stdc++.h>
using namespace std;

string solve()
{
    int n;
    cin >> n;

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        if (s3[i] != s1[i] && s3[i] != s2[i])
        {
            ans = true;
            break;
        }
    }

    return ans ? "YES" : "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
    return 0;
}