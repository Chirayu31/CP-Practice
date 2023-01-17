#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, c;
    cin >> n >> c;
    int count = 1;
    int first;
    cin >> first;

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        if ((x - first) > c)
            count = 1;
        else
            count++;
        first = x;
    }

    cout << count;
    return 0;
}