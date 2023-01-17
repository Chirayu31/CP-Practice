#include <iostream>
#include <cmath>
#include <utility>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, mini;
    cin >> n;
    int *arr = new int(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    pair<int, int> min_index;
    min_index.first = n - 1;
    min_index.second = 0;
    mini = abs(arr[n - 1] - arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int x = abs(arr[i] - arr[i + 1]);
        if (x < mini)
        {
            mini = x;
            min_index.first = i + 1;
            min_index.second = i;
        }
    }

    cout << min_index.first + 1 << " " << min_index.second + 1;
    return 0;
}