#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int odd = 0, evens = 0;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            if (v[i] % 2 != 0)
            {
                odd++;
            }
            else
            {
                evens++;
            }
        }

        if (odd == 0 || (evens == 0 && odd > 1))
        {
            cout << -1;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                    cout << v[i] << " ";
            }
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 != 0)
                    cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}