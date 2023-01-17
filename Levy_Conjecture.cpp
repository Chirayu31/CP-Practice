#include <bits/stdc++.h>
using namespace std;
const int maxN = 10005;
bool prime[10005];
int cnt[10005] = {0};

void seive()
{
    for (int i = 2; i < 10005; i++)
        prime[i] = true;

    for (int i = 2; i * i <= 10005; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= 10005; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    seive();

    for (int i = 2; i <= maxN; i++)
    {
        if (prime[i])
        {
            for (int j = i; j <= maxN; j++)
            {
                if (prime[j])
                {
                    if (i + 2 * j <= maxN)
                        cnt[i + 2 * j]++;
                    if (2 * i + j <= maxN && (2 * i + j) != (i + 2 * j))
                        cnt[2 * i + j]++;
                }
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << cnt[n] << endl;
    }
}