#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<pair<int, int>> waste(k);

    for (int i = 0; i < k; i++)
    {
        cin >> waste[i].first >> waste[i].second;
        // cout << waste[i].first << waste[i].second << " ";
    }

    while (t--)
    {
        bool f = false;

        int x, y;
        cin >> x >> y;
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            // cout << waste[i].first << waste[i].second;
            if (waste[i].first == x && waste[i].second == y)
            {
                f = true;
                break;
            }
            else if (waste[i].first < x)
                cnt++;
            else if (waste[i].first == x && waste[i].second < y)
                cnt++;
        }
        if (f)
            cout << "Waste";
        else
        {
            int a = ((x - 1) * m) + (y - 1);

            if ((a - cnt) % 3 == 0)
                cout << "Carrots";

            else if ((a - cnt) % 3 == 1)
                cout << "Kiwis";

            else if ((a - cnt) % 3 == 2)
                cout << "Grapes";
        }
        cout << endl;
    }
}