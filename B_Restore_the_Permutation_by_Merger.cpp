#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int arr[51] = {0};
        int n;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            if (arr[x] == 0)
                cout << x << " ";
            arr[x] = 1;
        }

        cout << endl;
    }
}