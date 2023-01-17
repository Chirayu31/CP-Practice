#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int last = n - 1;
    int first = 0;

    int sereja = 0, dima = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[last] > arr[first])
            {
                sereja += arr[last];
                last--;
            }
            else
            {
                sereja += arr[first];
                first++;
            }
        }
        else
        {
            if (arr[last] > arr[first])
            {
                dima += arr[last];
                last--;
            }
            else
            {
                dima += arr[first];
                first++;
            }
        }
    }
    cout << sereja << " " << dima;
}