#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n / 7;

    for (int i = 0; i < k; i++)
        cout << "ROYGBIV";

    if (n % 7 == 1)
    {
        cout << "G";
    }

    if (n % 7 == 2)
    {
        cout << "GB";
    }

    if (n % 7 == 3)
    {
        cout << "YGB";
    }

    if (n % 7 == 4)
    {
        cout << "YGBI";
    }

    if (n % 7 == 5)
    {
        cout << "YGBIV";
    }

    if (n % 7 == 6)
    {
        cout << "OYGBIV";
    }
}