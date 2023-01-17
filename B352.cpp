#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    int x = 0;
    vector<pair<int, int>> xs;

    for (auto i : mp)
    {
        vector<int> pos = i.second;
        if (pos.size() < 2)
        {
            x++;
            xs.push_back(make_pair(i.first, 0));
        }
        else
        {
            bool to_print = true;
            int diff = pos[1] - pos[0];
            for (int j = 1; j < pos.size() - 1; j++)
            {
                int checking = pos[j + 1] - pos[j];
                if (diff != checking)
                {
                    to_print = false;
                }
            }
            if (to_print)
            {
                xs.push_back(make_pair(i.first, diff));
                x++;
            }
        }
    }
    cout << x << endl;
    for (int i = 0; i < xs.size(); i++)
    {
        cout << xs[i].first << " " << xs[i].second << endl;
    }
}