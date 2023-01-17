#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mini = INT_MAX, miniIdx = -1;
    int maxi = INT_MIN, maxiIdx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= mini)
        {
            mini = v[i];
            miniIdx = i;
        }
        if (v[i] > maxi)
        {
            maxi = v[i];
            maxiIdx = i;
        }
    }

    int res = 0;
    res += n - 1 - miniIdx;
    res += maxiIdx;
    if (maxiIdx > miniIdx)
        res -= 1;
    cout << res;
}