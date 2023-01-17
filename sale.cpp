#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    vector<int> v;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int sum = 0;
    auto i = v.begin();
    while (m-- > 0)
    {
        if (*i < 0)
        {
            sum += *i;
            i++;
        }
        else
        {
            break;
        }
    }

    cout << sum * -1;
}