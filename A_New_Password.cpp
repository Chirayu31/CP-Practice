#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    long long f = 0;

    for (int i = 0; i < n; i++)
    {
        char c = 'a' + (char)(f % k);
        cout << c;
        f++;
    }
}