#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    vector<int> v;

    for (int i = 0; i < n - 3; i++)
    {
        if (s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r')
        {
            v.push_back(i);
        }
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    int ans = 0;
    for (int i = 0; i < n - 3; i++)
    {
        int k = -1;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] >= i)
            {
                k = v[j];
                break;
            }
        }
        if (k == -1)
            continue;
        // cout << i << ' ' << k << endl;
        ans += n - (k + 3);
    }
    cout << ans;
}