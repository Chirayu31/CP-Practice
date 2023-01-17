#include <bits/stdc++.h>
using namespace std;

int countDivisibles(int A, int B, int M)
{
    if (A % M == 0)
        return (B / M) - (A / M) + 1;

    return (B / M) - (A / M);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, d;
        cin >> n >> m >> a >> d;

        int ans = m - n + 1;

        for (int j = 0; j < 5; j++)
        {
            cout << countDivisibles(n, m, a + (j * d)) << " ";
        }
        cout << ans << endl;
    }
}