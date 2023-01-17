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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j < n && v[j + 1] - v[j] == 1)
            {
                j++;
            }

            if (j - i >= 2)
            {
                cout << v[i] << "..." << v[j];
                i = j;
            }
            else
                cout << v[i];
            if (i != n - 1)
                cout << ",";
        }
        cout << endl;
    }
}