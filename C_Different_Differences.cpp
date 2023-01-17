#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        int rem = n - k, last = 1, p = 1;

        cout << 1 << ' ';

        for (int i = 1; i < k; i++)
        {
            if (last + p <= n && rem >= 0)
            {
                int q = last + p;
                cout << q << " ";
                last = q;
                rem -= p;
                p++;
            }
            else
            {
                cout << ++last << " ";
            }
        }

        cout << endl;
    }
}