#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}