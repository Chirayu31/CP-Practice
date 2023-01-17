#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cin >> n;

    int a = 4, b = n - 4;

    while (checkPrime(b))
    {
        a += 2;
        b -= 2;
    }
    cout << a << " " << b;
}