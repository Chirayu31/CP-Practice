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

    vector<int> div(n + 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            div[j]++; //multiples of i
        }
    }

    for (int i = 1; i <= n; i++)
        cout << div[i] << "\n";
}