#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    bool f = false;

    for (int i = 1; i < len; i++)
    {
        if (s[i] == '1')
        {
            f = true;
            break;
        }
    }

    if (f)
    {
        cout << len / 2 + 1;
    }
    else
    {
        cout << len / 2;
    }
}