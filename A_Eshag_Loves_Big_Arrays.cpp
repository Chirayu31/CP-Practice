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
        int min = INT_MAX, freq = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < min)
            {
                freq = 1;
                min = x;
            }
            if (x == min)
                freq++;
        }

        cout << n - freq + 1 << endl;
    }
}