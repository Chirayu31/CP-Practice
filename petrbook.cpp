#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, sum;
    int arr[7];
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;
        sum += x;
        arr[i] = x;
    }
    int just_greater = sum;

    while (just_greater < n)
    {
        just_greater += sum;
    }

    for (int k = 6; k >= 0; k--)
    {
        if (just_greater - arr[k] >= n)
        {
            just_greater -= arr[k];
        }
        else
        {
            cout << k + 1;
            return 0;
        }
    }
    return 0;
}