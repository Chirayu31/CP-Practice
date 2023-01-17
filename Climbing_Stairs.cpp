#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    int t;
    cin >> t;
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < 1000001; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        arr[i] %= 1000000007;
    }

    while (t--)
    {

        int n, g;
        cin >> n >> g;

        int p = arr[n];
        int cnt = 0;

        while (p)
        {
            cnt += p & 1;
            p >>= 1;
        }

        if (g == cnt)
            cout << "CORRECT";
        else
            cout << "INCORRECT";
        cout << endl;
    }
}