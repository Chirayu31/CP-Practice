#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    string initialPos, desiredPos;
    cin >> initialPos >> desiredPos;

    int initialOneCount = 0, desiredOneCount = 0, unpairedCnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (initialPos[i] == '1')
            initialOneCount++;

        if (desiredPos[i] == '1')
            desiredOneCount++;
    }

    int ans = 0;

    if (initialOneCount > desiredOneCount)
    {
        for (int i = 0; i < n; i++)
        {
            if (initialPos[i] == '1' && desiredPos[i] == '0')
            {
                ans++;
                initialPos[i] = '0';
                initialOneCount--;

                if (initialOneCount == desiredOneCount)
                    break;
            }
        }
    }
    else if (desiredOneCount > initialOneCount)
    {
        for (int i = 0; i < n; i++)
        {
            if (initialPos[i] == '0' && desiredPos[i] == '1')
            {
                ans++;
                initialPos[i] = '1';
                initialOneCount++;

                if (initialOneCount == desiredOneCount)
                    break;
            }
        }
    }

    // if (desiredOneCount != initialOneCount)
    // {
    //     cout << initialPos << " " << desiredPos;
    //     return -1;
    // }

    for (int i = 0; i < n; i++)
    {
        if (initialPos[i] != desiredPos[i])
            unpairedCnt++;
    }

    ans += unpairedCnt / 2;

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
}