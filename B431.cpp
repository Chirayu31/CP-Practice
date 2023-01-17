#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[5][5];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];

    int q[5], ans = -1, tmp = 0;
    for (int i = 0; i < 5; i++)
        q[i] = i;

    do
    { //01234
        tmp += arr[q[0]][q[1]] + arr[q[1]][q[0]] + arr[q[2]][q[3]] + arr[q[3]][q[2]];
        //1234
        tmp += arr[q[1]][q[2]] + arr[q[2]][q[1]] + arr[q[3]][q[4]] + arr[q[4]][q[3]];
        //234
        tmp += arr[q[2]][q[3]] + arr[q[3]][q[2]];
        //34
        tmp += arr[q[3]][q[4]] + arr[q[4]][q[3]];

        if (tmp > ans)
        {
            ans = tmp;
        }
        tmp = 0;

    } while (next_permutation(q, q + 5));

    cout << ans;
    return 0;
}