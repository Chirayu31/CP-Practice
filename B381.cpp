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

    map<int, int> mp;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        s.insert(x);
    }

    auto it = s.begin();
    int count = 0;
    vector<int> v;
    for (it; it != s.end(); it++)
    {
        if (mp[*it] != 0)
        {
            count++;
            v.push_back(*it);
            mp[*it]--;
        }
    }
    auto it2 = s.rbegin();
    it2++;
    for (it2; it2 != s.rend(); it2++)
    {
        if (mp[*it2] != 0)
        {
            count++;
            v.push_back(*it2);
            mp[*it2]--;
        }
    }
    cout << count << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}