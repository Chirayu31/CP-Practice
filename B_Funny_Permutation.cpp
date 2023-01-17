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

        if (n == 3)
        {
            cout << -1<<endl;
            continue;
        }

        int mid = (n + 1) / 2;

        for (int i = mid + 1; i <= n; i++)
        {
            cout << i << " ";
        }

        for (int i = 1; i <= mid; i++)
            cout << i << " ";
        cout << endl;
    }
}