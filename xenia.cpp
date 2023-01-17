#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int curr_pos = 1, dest = -1;
    long long t = 0;
    while (m-- > 0)
    {
        int x;
        cin >> x;
        dest = x;
        if (curr_pos <= dest)
        {
            t += dest - curr_pos;
            curr_pos = dest;
        }
        else
        {
            t += n - curr_pos + 1;
            t += dest - 1;
            curr_pos = dest;
        }
    }
    cout << t;
    return 0;
}