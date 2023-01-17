#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string s;
        cin >> s;

        cout << s[0] << s[1];

        for (int i = 2; i < s.length(); i++)
        {
            if (i % 2 != 0)
                cout << s[i];
        }
        cout << endl;
    }
}