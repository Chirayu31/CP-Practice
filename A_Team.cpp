#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            count++;
    }
    cout << count;
}