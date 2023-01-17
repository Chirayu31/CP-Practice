#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> chef_country;
    map<string, int> chef_count;
    map<string, int> country_count;

    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        chef_country[s1] = s2;
    }

    for (int i = 0; i < m; i++)
    {
        string s1;
        cin >> s1;
        chef_count[s1]++;
        country_count[chef_country[s1]]++;
    }
    int coc = -1;
    string woc = "";

    for (auto it : country_count)
    {
        if (it.second > coc)
        {
            coc = it.second;
            woc = it.first;
        }
        else if (it.second == coc)
        {
            if (it.first < woc)
            {
                coc = it.second;
                woc = it.first;
            }
        }
    }
    cout << woc << endl;

    int cc = -1;
    string wc = "";

    for (auto it : chef_count)
    {
        if (it.second > cc)
        {
            cc = it.second;
            wc = it.first;
        }
        else if (it.second == cc)
        {
            if (it.first < wc)
            {
                cc = it.second;
                wc = it.first;
            }
        }
    }
    cout << wc << endl;
}