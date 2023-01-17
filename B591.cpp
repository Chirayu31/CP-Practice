#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    string s;
    cin >> n >> m >> s;
    int arr[26];
    for (int j = 0; j < 26; j++)
    {
        arr[j] = j + 'a';
    }
    for (int i = 0; i < m; i++)
    {
        char x, y;
        cin >> x >> y;
        for (int j = 0; j < 26; j++)
        {
            if (arr[j] == x)
                arr[j] = y;
            else if (arr[j] == y)
                arr[j] = x;
            // cout << s << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << (char)arr[s[i] - 'a'];
    }
}