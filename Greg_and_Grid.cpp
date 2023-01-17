#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;
bool prime[N];

int seive(int m)
{
    int count = 0;
    for (int i = 2; i <= m; i++)
    {
        prime[i] = true;
    }

    for (int i = 2; i * i <= m; i++)
    {
        if (prime[i] == true)
        {

            for (int j = i * i; j <= m; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= m; i++)
    {
        if (prime[i])
            count++;
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << seive(n + m);
}