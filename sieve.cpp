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

    vector<int> prime(n + 1, 1);

    for (int i = 2; i <= n; i++)
    {
        if (!prime[i])
            continue;
        for (int j = i * i; j <= n; j += i)
        {
            prime[j] = 0;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << ", ";
    }
}