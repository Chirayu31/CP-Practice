#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    set<long long> x, y;

    for (int i = 0; i < m; i++)
    {
        long long a, b;
        cin >> a >> b;
        x.insert(a);
        y.insert(b);
        long long cnt = (x.size() * n) + (y.size() * n) - (x.size() * y.size());
        cout << (n * n) - cnt << " ";
    }
}