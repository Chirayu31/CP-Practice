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
    bool exist = false;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        for (int j = 0; j < n; j++)
        {
            int b = v[j];
            for (int k = 0; k < n; k++)
            {
                if (v[k] == a + b && i != j && i != k && !exist)
                {
                    exist = true;
                    cout << k + 1 << " " << j + 1 << " " << i + 1 << endl;
                }
            }
        }
    }

    if (!exist)
        cout << -1;
    return 0;
}