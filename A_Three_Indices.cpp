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
        bool found = false;
        for (int i = 0; i < n - 2; i++)
        {
            if (v[i] < v[i + 1] && v[i + 1] > v[i + 2])
            {
                cout << "YES" << endl
                     << i + 1 << " " << i + 2 << " " << i + 3 << " " << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }
}