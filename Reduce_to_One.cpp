#include <bits/stdc++.h>
using namespace std;

int arr[1000002];

int main()
{
    int mod = 1e9 + 7;
    arr[1] = 1;
    for (int i = 2; i < 1000002; i++)
    {
        arr[i] = (arr[i - 1] * i) % mod;
    }
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << (arr[n + 1] - 1) % mod << endl;
    }
}