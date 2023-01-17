#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(v[i]);

        if (i + 1 < n && gcd(v[i], v[i + 1]) > 1)
        {
            ans.push_back(1);
        }
    }

    cout << ans.size() - n << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}