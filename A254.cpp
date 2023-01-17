#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    pair<int, int> *arr = new pair<int, int>[n * 2];

    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        arr[i] = make_pair(x, i + 1);
    }

    sort(arr, arr + (n * 2));

    bool possible = true;

    for (int i = 0; i < 2 * n; i += 2)
    {
        if (arr[i].first != arr[i + 1].first)
            possible = false;
    }

    if (possible)
    {
        for (int i = 0; i < 2 * n; i += 2)
        {
            cout << arr[i].second << " " << arr[i + 1].second << endl;
        }
    }
    else
        cout << -1;

    return 0;
}