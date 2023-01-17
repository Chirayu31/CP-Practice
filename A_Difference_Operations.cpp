#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, first;
        cin >> n >> first;
        bool f = true;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % first != 0)
            {
                f = false;
            }
        }
        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}