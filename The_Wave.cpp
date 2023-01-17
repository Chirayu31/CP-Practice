#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (binary_search(v.begin(), v.end(), x))
        {
            cout << 0 << endl;
        }
        else
        {
            int p = upper_bound(v.begin(), v.end(), x) - v.begin();
            if ((n - p) % 2 == 0)
            {
                cout << "POSITIVE" << endl;
            }
            else
                cout << "NEGATIVE" << endl;
        }
    }
}