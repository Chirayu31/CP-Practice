#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, fives = 0, zeros = 0;
    cin >> n;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        if (x == 5)
            fives++;
        else if (x == 0)
            zeros++;
    }

    if (zeros == 0)
    {
        cout << -1;
        return 0;
    }
    fives = fives - fives % 9;

    for (int i = 0; i < fives; i++)
        cout << 5;

    if (fives > 0)
    {
        for (int i = 0; i < zeros; i++)
        {
            cout << 0;
        }
    }
    else
    {
        cout << 0;
    }
}