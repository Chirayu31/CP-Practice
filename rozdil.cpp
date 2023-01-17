#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int min = INT_MAX, k;
    bool same_exist = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < min)
        {
            min = x;
            same_exist = false;
            k = i;
        }
        else if (x == min)
        {
            same_exist = true;
        }
    }
    if (same_exist)
    {
        cout << "Still Rozdil";
    }
    else
    {
        cout << k + 1;
    }
    return 0;
}