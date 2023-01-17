#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_forToast = (k * l) / nl;
    int slices_forToast = d * c;
    int salt_forToast = p / np;

    int mini = min({total_forToast, slices_forToast, salt_forToast});

    cout << mini / n;
    return 0;
}