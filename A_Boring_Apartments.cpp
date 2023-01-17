#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int count = 1, last = 0;
        bool found = false;
        for (int init = 1; init <= 9; init++)
        {
            for (int i = 0; i < 4; i++)
            {
                int p = init * (pow(10, i)) + last;
                if (p == x)
                {
                    count += i;
                    cout << count << endl;
                }
                else
                {
                    count += i + 1;
                }

                if (i == 3)
                    last = 0;
                else
                    last = init * (pow(10, i)) + last;
            }
            if (found)
                break;
        }
    }
}