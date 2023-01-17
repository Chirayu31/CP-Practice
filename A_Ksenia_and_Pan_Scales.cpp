#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, l = "", r = "", s2;
    cin >> s1 >> s2;

    bool f = false;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '|')
        {
            f = true;
            continue;
        }

        if (f)
        {
            r += s1[i];
        }
        else
            l += s1[i];
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if (l.length() < r.length())
        {
            l += s2[i];
        }
        else
            r += s2[i];
    }

    if (l.length() == r.length())
    {
        cout << l << "|" << r;
    }
    else
    {
        cout << "Impossible";
    }
}