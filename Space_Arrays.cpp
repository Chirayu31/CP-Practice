#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int diff = 0;
        bool p = true;
        for (int i = 1; i <= n; i++)
        {
            int d = i - v[i - 1];
            if (d < 0)
            {
                p = false;
            }
            else
                diff += d;
        }
        if (p)
        {
            if (diff % 2 == 0)
            {
                cout << "Second";
            }
            else
                cout << "First";
        }
        else
        {
            cout << "Second";
        }
        cout << endl;
    }
}