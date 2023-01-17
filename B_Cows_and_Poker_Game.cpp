#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool f = true;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            f = false;
            c2++;
        }
        if (s[i] == 'A')
            c1++;
    }

    if (f)
    {
        cout << c1;
    }
    else
    {
        if (c2 == 1)
            cout << c2;
        else
            cout << 0;
    }
}