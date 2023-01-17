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
    vector<int> arr(1e9 + 10);
    long long m = -1;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr[x]++;
        m = max(m, x);
    }
    long long mex = 0;
    for (long long i = 1; i < m; i++)
    {
        if (arr[i] == 0)
        {
            mex = max(mex, i);
            found = true;
        }
    }

    if (!found)
        cout << m + 1;
    else
        cout << mex;
    return 0;
}