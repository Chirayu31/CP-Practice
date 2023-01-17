#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int res = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 95)
            s1[i] -= 32;

        if (s2[i] >= 95)
            s2[i] -= 32;
    }
    if (s1 > s2)
        cout << 1;
    if (s2 > s1)
        cout << -1;
    if (s1 == s2)
        cout << 0;
}