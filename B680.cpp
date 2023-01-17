#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, count = 0;
    cin >> n >> a;
    vector<int> arr(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int front = n - a, back = n - front - 1;
    int i = 1;
    a = a - 1;
    if (arr[a] == 1)
        count++;

    while (front > 0 && back > 0)
    {
        if (arr[a + i] == arr[a - i] && arr[a + i] == 1)
        {
            count += 2;
        }

        i++;
        front--;
        back--;

        if (back == 0 || front == 0)
        {
            break;
        }
    }

    while (front-- > 0)
    {
        if (arr[a + i] == 1)
            count += 1;
        i++;
    }
    while (back-- > 0)
    {
        if (arr[a - i] == 1)
            count++;
        i++;
    }
    cout << count;
}