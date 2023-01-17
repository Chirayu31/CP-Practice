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
        if (n % 2 == 0)
        {
            int mid = n / 2;
            bool yes = true;
            for (int i = 0; i < mid; i++)
            {
                if (s[i] != s[i + mid])
                {
                    yes = false;
                    break;
                }
            }
            if (yes)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}