#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    int *arr = new int(m);

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    sort(arr, arr + m);
    int least = arr[n - 1] - arr[0];
    for (int i = 1; i <= m - n; i++)
    {
        if (arr[i + n - 1] - arr[i] < least)
            least = arr[i + n - 1] - arr[i];
    }

    cout << least;

    return 0;
}