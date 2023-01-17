#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                v.push_back({i + 1, n - i});
                for (int j = i; j < n; j++)
                {
                    if (s[j] == '1')
                        s[j] = '0';
                    else
                        s[j] = '1';
                }
            }
        }

        cout << v.size() << endl;

        for (auto &[x, y] : v)
        {
            cout << x << " " << y << endl;
        }
    }
}