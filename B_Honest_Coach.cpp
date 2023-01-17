#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n;
        cin >> n;
        int arr[n] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mi = INT_MAX;
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            mi = min(arr[i + 1] - arr[i], mi);
        }
        cout << mi << endl;
    }
}