#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int count200 = 0, count100 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 200)
            count200++;
        else
            count100++;
    }

    if (count200 % 2 != 0 && count100 % 2 == 0 && count100 != 0)
        cout << "YES";
    else if (count200 % 2 == 0 && count100 % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}