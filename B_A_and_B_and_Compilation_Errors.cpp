#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a ^= x;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        a ^= x;
        b ^= x;
    }
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        b ^= x;
    }
    cout << a << endl
         << b;
}