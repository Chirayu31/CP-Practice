#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> air(m);

    for (int i = 0; i < m; i++)
        cin >> air[i];

    int ans1 = 0, ans2 = 0;

    sort(air.begin(), air.end());

    vector<int> m1(air), m2(air);

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j++)
        {
            if (m1[j] > 0)
            {
                ans1 += m1[j];
                m1[j]--;
                break;
            }
        }
        sort(m1.begin(), m1.end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (m2[j] > 0)
            {
                ans2 += m2[j];
                m2[j]--;
                break;
            }
        }
        sort(m2.begin(), m2.end());
    }

    cout << ans1 << " " << ans2;
}