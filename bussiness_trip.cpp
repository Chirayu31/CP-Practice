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

    int k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    int count = 0, sum = 0;
    auto it = v.begin();
    while (sum < k && count < 12)
    {
        sum += *it;
        it++;
        count++;
    }
    if (sum >= k)
    {
        cout << count;
    }
    else
    {
        cout << -1;
    }
}