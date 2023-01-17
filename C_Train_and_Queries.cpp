#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string empty;
        getline(cin, empty);
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!mp.count(x))
            {
                mp[x].first = mp[x].second = i;
            }
            else
            {
                mp[x].second = i;
            }
        }

        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            if (!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second)
            {
                cout << "NO";
            }
            else
                cout << "YES";
            cout << endl;
        }
    }
}