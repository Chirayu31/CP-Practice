#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;
    cin >> s >> r;

    int i = 0, j = 0;

    for (j; j < r.size(); j++)
    {
        if (s[i] == r[j])
        {
            i++;
        }
    }
    cout << i + 1;
}