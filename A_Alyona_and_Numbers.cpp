#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long count = 0;
    long long arr[5] = {0};

    for (int i = 1; i <= m; i++)
    {
        arr[i % 5]++;
    }

    for (int i = 1; i <= n; i++)
    {
        int x = i % 5;
        int r = (5 - x) % 5;
        count += arr[r];
    }

    cout << count;
    return 0;
}