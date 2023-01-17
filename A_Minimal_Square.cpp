#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;

        int x = min(max(2 * b, a), max(2 * a, b));

        cout << x * x << endl;
    }
}