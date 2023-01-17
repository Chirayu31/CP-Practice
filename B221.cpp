#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x;
    cin >> x;

    int temp = x;
    int arr[10] = {0};
    while (temp != 0)
    {
        arr[temp % 10]++;
        temp /= 10;
    }

    int count = 0;

    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (x / i != i)
            {
                int temp = i;
                while (temp != 0)
                {
                    if (arr[temp % 10])
                    {
                        count++;
                        break;
                    }
                    temp /= 10;
                }

                temp = x / i;
                while (temp != 0)
                {
                    if (arr[temp % 10])
                    {

                        count++;
                        break;
                    }
                    temp /= 10;
                }
            }
            else
            {
                int temp = i;
                while (temp != 0)
                {
                    if (arr[temp % 10])
                    {

                        count++;
                        break;
                    }
                    temp /= 10;
                }
            }
        }
    }
    cout << count;
}