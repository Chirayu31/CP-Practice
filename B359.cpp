#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;

    vector<int> v(n + 1);

    for (int i = 1; i <= 2 * n; i++)
        v[i] = i;

    for (int i = 1; i <= k; i++)
    {
        int temp = v[i];
        v[i] = v[i + 1];
        v[i + 1] = temp;
        i++;
    }

    for (int i = 1; i <= 2 * n; i++)
        cout << v[i] << " ";
}