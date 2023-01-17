#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h = 0, count = 0;

    while (count <= n)
    {
        h++;
        count += h * (h + 1) / 2;
    }
    cout << h - 1;
}