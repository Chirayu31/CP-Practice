#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        x--;

        if (x - 1 >= 0)
        {
            v[x - 1] += y - 1;
        }

        if (x + 1 < n)
        {
            v[x + 1] += v[x] - y;
        }
        v[x] = 0;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << endl;
}