#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, z;
        cin >> n >> z;
        ll maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maxi = max(x | z, maxi);
        }
        cout << maxi << endl;
        ;
    }
}