#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e7 + 9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        long long ways = 1;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                // cout << s[i] << " " << s[n - i - 1] << "  ";
                char c = s[i];
                char d = s[n - i - 1];
                if (c == '?' && d == '?')
                {
                    ways *= 26;
                    ways = ways % mod;
                }
                else if (c != d && c != '?' && d != '?')
                {
                    ways = 0;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < (n + 1) / 2; i++)
            {
                // cout << s[i] << " " << s[n - i - 1] << "  ";
                char c = s[i];
                char d = s[n - i - 1];
                if (c == '?' && d == '?')
                {
                    ways *= 26;
                    ways = ways % mod;
                }
                else if (c != d && c != '?' && d != '?')
                {
                    ways = 0;
                    break;
                }
            }
        }

        cout << ways << endl;
    }
}