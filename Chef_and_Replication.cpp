#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        bool found = false;

        long long ans = 0;

        for (long long i = 0; i < n; i++)
        {
            long long count = 1;
            while (v[i] == v[i + 1])
            {
                count++;
                i++;
            }
            if (count == k)
            {
                ans += v[i];
                found = true;
            }
        }
        if (found)
            cout << ans;
        else
            cout << -1;
        cout << endl;
    }
}