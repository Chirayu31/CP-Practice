#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int first = v[0], last = v[n - 1];

    cout << abs(v[0] - v[1]) << " " << abs(v[0] - v[n - 1]) << endl;

    for (int i = 1; i < n - 1; i++)
    {
        cout << min(abs(v[i] - v[i + 1]), abs(v[i] - v[i - 1])) << " " << max(abs(v[i] - first), abs(v[i] - last)) << endl;
    }

    cout << abs(last - v[n - 2]) << " " << abs(v[0] - v[n - 1]) << endl;
}