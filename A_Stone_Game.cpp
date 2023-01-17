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
        int ma = INT_MIN, mi = INT_MAX;
        int ma_idx, mi_idx;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > ma)
            {
                ma = x;
                ma_idx = i;
            }
            if (x < mi)
            {
                mi = x;
                mi_idx = i;
            }
        }
        cout << min({max(ma_idx, mi_idx) + 1,
                     (n - 1) - min(ma_idx, mi_idx) + 1,
                     (n - 1) - ma_idx + mi_idx + 2,
                     (n - 1) - mi_idx + ma_idx + 2})
             << "\n";
    }
}