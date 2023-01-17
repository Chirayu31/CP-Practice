#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    bool ans = false;

    for (int i = 0; i < n - 2; i++)
    {
        int a = v[i], b = v[i + 1], c = v[i + 2];
        if (a + b > c)
        {
            ans = true;
            break;
        }
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}