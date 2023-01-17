#include <bits/stdc++.h>
using namespace std;
bool com(int a, int b)
{
    return abs(a) > abs(b);
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), com);

    int i = 0;

    while (i < n && k > 0)
    {
        if (v[i] < 0)
        {
            v[i] *= -1;
            k--;
        }
        i++;
    }

    while (k-- > 0)
    {
        v[n - 1] *= -1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += v[i];
    cout << ans;
}