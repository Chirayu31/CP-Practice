#include <iostream>
#include <string>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    bool istrue = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!istrue)
            {
                cout << " ";
            }
            continue;
        }
        else
        {
            istrue = false;
            cout << s[i];
        }
    }
    return 0;
}