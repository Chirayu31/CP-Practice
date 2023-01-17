#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x, y;
    cin >> x >> y;

    if (abs(c - a) % x == 0 && abs(d - b) % y == 0)
        cout << "YES";
    else
        cout << "NO";
}