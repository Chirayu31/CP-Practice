#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    string arr[4] = {s1, s2, s3, s4};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i + 1 < 4 && j + 1 < 4)
            {
                char one = arr[i][j], two = arr[i][j + 1], three = arr[i + 1][j], four = arr[i + 1][j + 1];
                int sum = one + two + three + four;

                if (sum == 173 || sum == 151 || sum == 184 || sum == 140)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}