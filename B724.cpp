#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() < 3)
    {
        cout << "YES";
    }
    else if (s.size() == 3)
    {
        int a, b, c;
        auto it = s.begin();
        a = *it;
        it++;
        b = *it;
        it++;
        c = *it;
        if (2 * b == a + c)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    else
        cout << "NO";
}