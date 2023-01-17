#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, odd = 0, even = 0;
        cin >> n >> q;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        for (int i = 0; i < q; i++)
        {
            int ty, x;
            cin >> ty >> x;
            if (ty == 0)
            {
                sum += even * x;
                if (x % 2 != 0)
                {
                    odd += even;
                    even = 0;
                }
            }
            if (ty == 1)
            {
                sum += odd * x;
                if (x % 2 != 0)
                {
                    even += odd;
                    odd = 0;
                }
            }
            cout << sum << endl;
        }
    }
}