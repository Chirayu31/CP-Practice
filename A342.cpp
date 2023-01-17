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
    int arr[7] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x - 1]++;
    }
    bool found = false;
    int var124 = 0, var126 = 0, var136 = 0;

    while (arr[0] != 0 && arr[1] != 0 && arr[3] != 0 && arr[4] == 0 && arr[6] == 0)
    {
        var124++;
        found = true;
        arr[0]--;
        arr[1]--;
        arr[3]--;
    }

    while (arr[0] != 0 && arr[1] != 0 && arr[5] != 0 && arr[4] == 0 && arr[6] == 0)
    {
        var126++;
        found = true;
        arr[0]--;
        arr[1]--;
        arr[5]--;
    }

    while (arr[0] != 0 && arr[2] != 0 && arr[5] != 0 && arr[4] == 0 && arr[6] == 0)
    {
        var136++;
        found = true;
        arr[0]--;
        arr[2]--;
        arr[5]--;
    }

    if (!found || var124 + var126 + var136 != n / 3)
        cout << -1;
    else
    {
        for (int i = 0; i < var124; i++)
            cout << "1 2 4\n";

        for (int i = 0; i < var126; i++)
            cout << "1 2 6\n";

        for (int i = 0; i < var136; i++)
            cout << "1 3 6\n";
    }
    return 0;
}