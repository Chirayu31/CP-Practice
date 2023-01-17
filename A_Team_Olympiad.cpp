#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int one = 0, two = 0, three = 0;

    vector<int> ones, twos, threes;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            one++;
            ones.push_back(i + 1);
        }
        if (x == 2)
        {
            two++;
            twos.push_back(i + 1);
        }
        if (x == 3)
        {
            three++;
            threes.push_back(i + 1);
        }
    }

    int m = min(one, two);
    m = min(m, three);
    cout << m << endl;

    for (int i = 0; i < m; i++)
    {
        cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
    }
}