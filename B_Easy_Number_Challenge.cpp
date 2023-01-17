#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n = a * b * c;
    vector<int> v(n + 1);

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = i; j < n + 1; j += i)
        {
            v[j]++;
        }
    }
    long long ans = 0;
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            for (int k = 1; k <= c; k++)
            {
                // cout << i * j * k << " ";
                ans += v[i * j * k] % 1073741824;
                ans %= 1073741824;
            }
    cout << ans;
}