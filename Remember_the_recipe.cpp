#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> &a, pair<string, int> &b)
{
    return (a.second > b.second);
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> vec;
    for (int i = 0; i < n; i++)
    {
        string s;
        int v;
        cin >> s >> v;
        vec.push_back(make_pair(s, v));
    }

    sort(vec.begin(), vec.end(), comp);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string query;
        cin >> query;
        int len = query.length();
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            // cout << vec[i].first << " " << vec[i].second;
            if (vec[i].first.compare(0, len, query) == 0)
            {
                cout << vec[i].first << endl;
                f = true;
                break;
            }
        }
        if (!f)
            cout << "NO" << endl;
    }
}