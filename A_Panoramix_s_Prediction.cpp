#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(101, true);

void seive()
{
    for (int i = 2; i * i <= 100; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 100; j += i)
                prime[j] = false;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    seive();

    // for (int i = 0; i < 100; i++)
    // {
    //     if (prime[i])
    //         cout << i << " ";
    // }

    if (prime[m])
    {
        bool f = true;
        for (int i = n + 1; i < m; i++)
        {
            if (prime[i])
                f = false;
        }
        if (f)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
}