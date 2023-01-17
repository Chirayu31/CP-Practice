#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> m(n + 1, 0);
    for (int i = n - 2; i >= 0; i--)
    {
        m[i] = max(m[i + 1], v[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i] >= v[i])
            cout << m[i] + 1 - v[i] << " ";
        else
            cout << 0 << " ";
    }
    // cout << 0;
}