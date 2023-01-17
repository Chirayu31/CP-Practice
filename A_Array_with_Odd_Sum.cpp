#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (x % 2 != 0)
                even++;
            else
                odd++;
        }
        if (sum % 2 == 0)
        {
            if (even > 0 && odd > 0)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "YES";
        cout << endl;
    }
}