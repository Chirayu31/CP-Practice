#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long cnt = 0;
        if (n % 2050 == 0)
        {
            n /= 2050;
            while (n != 0)
            {
                cnt += n % 10;
                n /= 10;
            }
            cout << cnt;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
}