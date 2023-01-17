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
        int n;
        cin >> n;
        string w(s);
        sort(w.rbegin(), w.rend());
        int total = 0;

        for (int i = 0; i < s.length(); i++)
        {
            total += s[i] - 'a' + 1;
        }

        if (total <= n)
        {
            cout << s;
        }
        else
        {
            map<char, int> mp;

            for (int i = 0; i < w.length(); i++)
            {
                if (total > n)
                {
                    mp[w[i]]++;
                    total -= w[i] - 'a' + 1;
                }
            }

            for (int i = 0; i < s.length(); i++)
            {
                if (mp[s[i]] > 0)
                {
                    mp[s[i]]--;
                    continue;
                }
                cout << s[i];
            }
        }
        cout << endl;
    }
}