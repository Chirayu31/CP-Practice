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
        long long s1 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s1 += x;
        }

        cout << abs(s1) << endl;
    }
}