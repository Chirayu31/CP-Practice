#include <bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    string s = to_string(n);
    int len = s.size();
    bool flag = true;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0' || s[i] == '1' || s[i] == '4' || s[i] == '9')
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}
int main()
{
    int t;
    vector<long long> pnums;

    cin >> t;
    for (int i = 0; i <= 100000; i++)
    {
        long long x = i * i;
        if (check(x))
        {
            pnums.push_back(x);
        }
    }
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int cnt = 0;
        for (auto e : pnums)
        {
            if (e >= a && e <= b)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}