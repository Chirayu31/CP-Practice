#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    int curr = 0;
    int i = 0;
    for (; i < n; i++)
    {
        curr += v[i];
        sum -= v[i];
        if (curr > sum)
        {
            break;
        }
    }
    cout << i + 1;
}