#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 4);
        bool found = false;
        do
        {
            int a = (arr[0] + arr[1]) / 2;
            int b = (arr[0] - arr[1]) / 2;

            if (a >= 1 && b >= 1 && b <= 10e4 && a <= 10e4 && a + b == arr[0] && a - b == arr[1] && a * b == arr[2] && a / b == arr[3])
            {
                found = true;
                cout << a << " " << b << endl;
                break;
            }

        } while (next_permutation(arr, arr + 4));
        if (!found)
            cout << -1 << " " << -1 << endl;
    }
}