#include <bits/stdc++.h>
using namespace std;
const int temp = 1e9 + 7;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr + 3);

        long long ans = ((arr[0] % temp) * ((arr[1] - 1) % temp)) % temp;
        ans = ((ans % temp) * ((arr[2] - 2) % temp)) % temp;
        cout << (ans % temp) << endl;
    }
}