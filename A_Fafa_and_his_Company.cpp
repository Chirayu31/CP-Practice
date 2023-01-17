#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int c = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
            if ((n / i) != i)
                c++;
        }
    }
    cout << c;
}