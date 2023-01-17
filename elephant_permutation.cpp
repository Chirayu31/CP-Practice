#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << n << " ";

    for (int i = 0; i < n - 1; i++)
    {
        cout << i + 1 << " ";
    }

    return 0;
}