#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, t, k, d;
    cin >> n >> t >> k >> d;

    int p = ceil(n / k) * t;
    int q = ceil(n / k);

    cout << p;
}