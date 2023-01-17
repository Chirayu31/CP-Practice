#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;

        int peices = 1;

        while (w % 2 == 0)
        {
            peices *= 2;
            w /= 2;
        }
        while (h % 2 == 0)
        {
            peices *= 2;
            h /= 2;
        }
        if (peices >= n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}