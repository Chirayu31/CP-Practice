#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        int n;
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr + 3);
        n -= 2 * arr[2] - arr[1] - arr[0];
        if (n < 0 || n % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}