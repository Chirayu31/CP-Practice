#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();

        int i = 0;

        while (s[i] != 'W')
        {
            i++;
        }

        int xr = i ^ (n - 1 - i);

        if (xr == 0)
            cout << "Chef";
        else
            cout << "Aleksa";
        cout << endl;
    }
}