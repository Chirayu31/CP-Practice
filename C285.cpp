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

    int *arr = new int(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (arr[x - 1] == -1 && x > 0 && x <= n)
        {
        }
        else
        {
            if (x > 0 && x <= n)
                arr[x - 1] = -1;
        }
    }
}