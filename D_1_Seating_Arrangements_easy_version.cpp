#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m), arrived;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            int small = 0;
            for (int j = 0; j < arrived.size(); j++)
            {
                if (arrived[j] < v[i])
                    small++;
            }
            arrived.push_back(v[i]);
            ans += small;
        }
        cout << ans << "\n";
    }
}