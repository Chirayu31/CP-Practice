#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = -1, r = -1;
    bool inc = true;

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1] && inc)
        {
            l = i - 1;
            inc = false;
        }
        if (v[i] > v[i - 1] && !inc)
        {
            r = i - 1;
            inc = true;
        }
    }
    // cout << l << r;
    if (l == -1 && r == -1)
    {
        cout << "yes\n";
        cout << "1 1\n";
        return 0;
    }
    else
    {
        if (r == -1)
            r = n - 1;
        sort(v.begin() + l, v.begin() + r + 1);
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                cout << "no\n";
                return 0;
            }
        }
        cout << "yes\n";
        cout << l + 1 << " " << r + 1;
        return 0;
    }
}