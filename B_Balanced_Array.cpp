#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n;
        cin >> n;

        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            int even = 0, odd = 0;
            for (int i = 2; i < n + 2; i += 2)
            {
                cout << i << " ";
                even += i;
            }

            for (int i = 1; i < n - 1; i += 2)
            {
                cout << i << " ";
                odd += i;
            }
            cout << even - odd;
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}