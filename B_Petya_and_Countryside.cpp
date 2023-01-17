#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        // cout << h[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int c = 1;
        int k = h[i];

        for (int j = i - 1; j >= 0; j--)
        {
            if (h[j] <= k)
            {
                c++;
                k = h[j];
            }
            else
                break;
        }
        k = h[i];
        for (int j = i + 1; j < n; j++)
        {
            if (h[j] <= k)
            {
                c++;
                k = h[j];
            }
            else
                break;
        }
        ans = max(ans, c);
    }
    cout << ans;
}