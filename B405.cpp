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

    vector<int> v(n);

    int l = -1, r = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            l = i;
            if (r == -1)
            {
                for (int j = i; j >= 0; j--)
                {
                    v[j] = -1;
                }
            }
            else
            {
                for (int j = i; j >= (r + l) / 2; j--)
                {
                    v[j] = -1;
                }
            }

            if ((l + r) % 2 == 0 && r != -1)
            {
                v[(l + r) / 2] = 0;
            }
        }

        if (s[i] == 'R')
        {
            r = i;
            int j = i;
            while (s[j] != 'L' && j < n)
            {
                v[j] = 1;
                j++;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            count++;
    }
    cout << count;
    return 0;
}