#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int m = 240;
    m = m - k;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        m = m - 5 * i;
        if (m >= 0)
        {
            count++;
        }
    }
    cout << count;
}