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

        if (n == 1)
        {
            cout << 0;
        }
        else
        {
            int cnt2 = 0, cnt3 = 0;
            bool flag = true;
            while (n != 1)
            {
                if (n % 2 == 0)
                {
                    n /= 2;
                    cnt2++;
                }
                else if (n % 3 == 0)
                {
                    n /= 3;
                    cnt3++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (cnt2 > cnt3 || !flag)
            {
                cout << -1;
            }
            else
            {
                cout << 2 * cnt3 - cnt2;
            }
        }
        cout << endl;
    }
}