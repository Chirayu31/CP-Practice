#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int last = -1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] == 1)
        {
            if (last == -1)
                last = i;
            cnt++;
        }
    }

    long long ans = 1;

    for (int i = last + 1; i < n; i++)
    {
        if (v[i] == 1)
        {
            ans *= i - last;
            last = i;
        }
    }
    if (cnt == 0)
        ans = 0;
    cout << ans;
}