#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(2 * n + 1);
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i < 2 * n + 1; i += 2)
    {
        if (v[i] - 1 > v[i - 1] && v[i] - 1 > v[i + 1])
        {
            v[i]--;
            k--;
        }
        if (k == 0)
            break;
    }

    for (int i = 0; i < 2 * n + 1; i++)
    {
        cout << v[i] << " ";
    }
}