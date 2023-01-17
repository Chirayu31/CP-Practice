#include <bits/stdc++.h>
using namespace std;

int main()
{
    int step, mod;
    while (cin >> step >> mod)
    {
        vector<int> v(mod, 0);

        int curr = 0;
        for (int i = 0; i < mod; i++)
        {
            // cout << curr << " ";
            v[curr] = 1;
            curr = (curr + step) % mod;
        }
        bool flag = true;
        for (int i = 0; i < mod; i++)
        {
            if (v[i] == 0)
                flag = false;
        }
        cout << step << " " << mod << " ";
        if (flag)
        {
            cout << "Good Choice";
        }
        else
            cout << "Bad Choice";
        cout << endl;
    }
}