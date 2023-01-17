#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, ans;
    cin >> n >> a >> b;
    ans += n - a;
    cout << ans;
}