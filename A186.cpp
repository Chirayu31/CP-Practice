#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int diff = 0;
    int pos[2] = {0};
    if (s1.length() != s2.length())
    {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (diff >= 2)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                pos[diff] = i;
                diff++;
            }
        }
    }

    if (diff == 1)
    {
        cout << "NO";
    }
    else
    {
        char temp = s1[pos[0]];
        s1[pos[0]] = s1[pos[1]];
        s1[pos[1]] = temp;
        if (s1 == s2)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}