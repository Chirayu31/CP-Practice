#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll brr[n] = {0}, crr[n] = {0};
    for (ll i = n - 2; i > -1; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            brr[i] = brr[i + 1] + (arr[i] - arr[i + 1]);
        }
        else
            brr[i] = brr[i + 1];
    }
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            crr[i] = crr[i - 1] + (arr[i] - arr[i - 1]);
        }
        else
            crr[i] = crr[i - 1];
    }
    // for(ll i=0;i<n;i++)
    // {
    //     cout<<brr[i]<<" ";
    // }

    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x < y)
            cout << brr[x - 1] - brr[y - 1] << "\n";
        else
            cout << crr[x - 1] - crr[y - 1] << "\n";
    }
}