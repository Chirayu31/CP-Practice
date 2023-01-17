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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (n > 2)
        {
            int maxFreq = 0;
            for (auto it : mp)
            {
                maxFreq = max(maxFreq, it.second);
            }
            cout << min(n - 2, n - maxFreq) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}