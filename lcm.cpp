#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int lcmWOgcd(int *arr, int n)
{
    int max_no = arr[0];

    for (int i = 0; i < n; i++)
        max_no = max(max_no, arr[i]);

    long long res = 1;

    int x = 2;

    while (x <= max_no)
    {
        vector<int> idx;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % x == 0)
                idx.push_back(i);
        }
        if (idx.size() >= 2)
        {
            for (int j = 0; j < idx.size(); j++)
            {
                arr[idx[j]] /= x;
            }

            res = res * x;
        }
        else
            x++;
    }
    for (int i = 0; i < n; i++)
        res *= arr[i];
    return res;
}

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << lcm(a, b);
    int arr[6] = {1, 2, 3, 4, 5, 10};
    cout << lcmWOgcd(arr, 6);
}