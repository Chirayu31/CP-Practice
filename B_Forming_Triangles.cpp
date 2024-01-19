#include <bits/stdc++.h>
using namespace std;

long long solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<pair<long long, long long>> freq;

    long long last_ele = a[0], count = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == last_ele)
        {
            count++;
        }
        else
        {
            freq.push_back({count, i - count});
            last_ele = a[i];
            count = 1;
        }
    }

    freq.push_back({count, n - count});

    long long ans = 0;
    for (pair<long long, long long> p : freq)
    {
        long long f = p.first, b = p.second;

        ans += f * (f - 1) * b / 2;
        ans += f * (f - 1) * (f - 2) / 6;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
}