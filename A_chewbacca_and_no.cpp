#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        int x = n[i] - '0';

        if (x >= 5)
        {
            if (i == 0 && x == 9)
                cout << x;
            else
                cout << 9 - x;
        }
        else
            cout << x;
    }
}