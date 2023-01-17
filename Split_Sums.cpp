#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        long long u = (n * (n + 1)) / 2;

        if ((__gcd((u + m) / 2, (u - m) / 2) == 1) && ((u % 2 == 0 && m % 2 == 0) || (u % 2 == 1 && m % 2 == 1)))
        {
            cout << "Yes";
        }
        else
            cout << "No";
        cout << endl;
    }
}