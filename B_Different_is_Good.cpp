#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> se;

    for (int i = 0; i < n; i++)
    {
        se.insert(s[i]);
    }

    int a = n - se.size();
    int b = 26 - se.size();
    if (a > b)
    {
        cout << -1;
    }
    else
        cout << a;
}