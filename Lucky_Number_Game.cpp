#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int arr[n];

        int divBoth = 0, divA = 0, divB = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % a == 0 && x % b == 0)
            {
                divBoth++;
            }
            else if (x % a == 0)
            {
                divA++;
            }
            else if (x % b == 0)
            {
                divB++;
            }
        }

        if (divBoth)
        {
            divA++;
        }
        if (divA > divB)
            cout << "BOB";
        else
            cout << "ALICE";

        cout << endl;
    }
}