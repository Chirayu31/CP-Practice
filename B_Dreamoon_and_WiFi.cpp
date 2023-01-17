#include <bits/stdc++.h>
using namespace std;

int main()
{
    string one, two;
    cin >> one >> two;

    int oneP = 0, oneM = 0;

    for (int i = 0; i < one.length(); i++)
    {
        if (one[i] == '+')
            oneP++;
        else
            oneM++;
    }

    queue<string> q;
    vector<string> v;
    q.push(two);

    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        bool f = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
            {
                s[i] = '+';
                q.push(s);
                s[i] = '-';
                q.push(s);
                f = true;
                break;
            }
        }
        if (!f)
            v.push_back(s);
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        string s = v[i];
        int twoP = 0, twoM = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '+')
                twoP++;
            else
                twoM++;
        }
        if (twoP == oneP && twoM == oneM)
            ans++;
    }
    cout << fixed << setprecision(12) << double(ans) / double(v.size());
}