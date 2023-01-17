#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int recruited = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            if (recruited == 0)
                count++;
            else
                recruited--;
        }
        else
            recruited += x;
    }
    cout << count;
}