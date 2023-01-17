#include <bits/stdc++.h>
using namespace std;
int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 774, 747, 777};

int main()
{
    int n;
    cin >> n;
    int flag = 0;

    for (int i = 0; i < 14; i++)
    {
        if (n % arr[i] == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}