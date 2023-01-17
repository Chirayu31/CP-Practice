#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[1000000] = {0};

    for (int i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                arr[i] = 1;
            }
        }
    }

    for (int i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}