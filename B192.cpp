#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mini = v[0];

    for (int i = 0; i < n;)
    {
        if (v[i + 1] > v[i + 2])
        {
            i += 1;
            if (v[i] < mini && i < n)
                mini = v[i];
        }
        else
        {
            i += 2;
            if (v[i] < mini && i < n)
                mini = v[i];
        }
        }
    cout << mini;
}