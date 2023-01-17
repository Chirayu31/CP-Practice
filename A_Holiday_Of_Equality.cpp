#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = -1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m = max(m, x);
        sum += x;
    }
    cout << (n * m) - sum;
}