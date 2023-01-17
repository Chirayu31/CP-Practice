#include <bits/stdc++.h>
using namespace std;

// Seive Start
const int N = 1000001;
bool prime[N];

void seive()
{
    for (int i = 2; i <= N; i++)
    {
        prime[i] = true;
    }

    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += i)
                prime[j] = false;
        }
    }
}
// Seive End
bool checkBruteForce(int n)
{

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }

    if (cnt == 2)
        return true;
    else
        return false;
}

bool check_BF_Opt(int n)
{
    int cnt = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i)
                cnt++;
            // cout << i << " " << n / i << " ";
        }
    }
    if (cnt == 2)
        return true;
    else
        return false;
}

int main()
{
    int a;
    cin >> a;
    seive();
    cout << checkBruteForce(a) << endl;
    cout << check_BF_Opt(a) << endl;
    cout << prime[a];
}