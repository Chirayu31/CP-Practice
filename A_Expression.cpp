#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    int ans = arr[0] + arr[1] + arr[2];
    ans = max(ans, (arr[0] + arr[1]) * arr[2]);
    ans = max(ans, arr[0] * (arr[1] + arr[2]));
    ans = max(ans, arr[0] * arr[1] * arr[2]);
    cout << ans << endl;
}