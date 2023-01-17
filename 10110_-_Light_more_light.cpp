#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {

        int n;
        cin >> n;

        if (n == 0)
        {
            return;
        }

        int c = sqrt(n);
        // cout << endl;
        if (c * c == n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}