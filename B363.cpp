#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;
    vector<int> v;
    int sum = 0, idx = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i < k)
        {
            sum += x;
        }
        v.push_back(x);
    }

    for (int i = 1; i < n - k + 1; i++)
    {
        int temp = sum - v[i - 1] + v[k + i - 1];
        if (temp < sum)
        {
            sum = temp;
            idx = i;
            if (sum == 1)
                break;
        }
    }

    cout << idx + 1;
    return 0;
}