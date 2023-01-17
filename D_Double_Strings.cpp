#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<string> s;
        vector<string> str(n);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            s.insert(str[i]);
        }
        for (int i = 0; i < n; i++)
        {
            string x = str[i];
            int len = x.length();
            bool found = false;
            for (int i = 1; i < len; i++)
            {
                if (s.find(x.substr(0, i)) != s.end() && s.find(x.substr(i, len)) != s.end())
                {
                    cout << 1;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << 0;
        }
        cout << endl;
    }
}