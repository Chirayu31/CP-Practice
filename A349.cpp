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

    int count25 = 0, count50 = 0, count100 = 0;
    bool yes = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 25)
            count25++;
        if (x == 50)
        {
            if (count25 > 0)
            {
                count50++;
                count25--;
            }
            else
            {
                yes = false;
                break;
            }
        }
        if (x == 100)
        {
            if (count25 > 0 && count50 > 0)
            {
                count100++;
                count50--;
                count25--;
            }
            else if (count25 > 2)
            {
                count100++;
                count25 -= 3;
            }
            else
            {
                yes = false;
                break;
            }
        }
    }

    if (yes)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}