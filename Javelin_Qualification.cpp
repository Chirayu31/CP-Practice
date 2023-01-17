#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, int>> v(n);
        vector<int> res;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i + 1});
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        int cnt = 0;

        for (pair<int, int> p : v)
        {
            if (p.first >= m)
            {
                res.push_back(p.second);
                cnt++;
            }
            else
            {
                if (cnt < x)
                {
                    res.push_back(p.second);
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << res.size() << " ";
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}