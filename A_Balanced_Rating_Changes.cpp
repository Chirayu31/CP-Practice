#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int f = 1;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            cout << x / 2 << endl;
        else
        {
            cout << (x + f) / 2 << endl;
            f *= -1;
        }
    }
}