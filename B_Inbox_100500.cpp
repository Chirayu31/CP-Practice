#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 0;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            if (!f)
            {
                ans += 2;
            }
            else
            {
                ans++;
                f = false;
            }
            int j = i + 1;
            while (j < n && v[j] < n && v[j] == 1)
            {
                v[j] = 0;
                ans++;
                j++;
            }
            // cout << i << " " << ans << endl;
        }
    }
    cout << ans;
}