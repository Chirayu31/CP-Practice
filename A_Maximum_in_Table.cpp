#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n + 1][n + 1];

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (i == 1 || j == 1)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    cout << arr[n][n];
}