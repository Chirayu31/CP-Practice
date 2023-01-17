#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = INT_MAX;

        for (int i = 0; i <= 30; i++)
        {
            for (int j = i + 1; j <= 30; j++)
            {
                ans = min(ans, abs((1 << i) + (1 << j) - n));
            }
        }
        cout << ans << endl;
    }
}