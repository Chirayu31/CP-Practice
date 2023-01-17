#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mini = min(mini, v[i]);
        }
        int p = max((int)ceil((float)x / mini), n);
        cout << p << endl;
    }
}