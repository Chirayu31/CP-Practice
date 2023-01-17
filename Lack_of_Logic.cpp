#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string p;
    getline(cin, p);
    while (t--)
    {
        string s;
        getline(cin, s);
        int arr[27] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                arr[s[i] - 'a']++;
            }

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                arr[s[i] - 'A']++;
            }
        }
        bool found = false;

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
            {
                cout << (char)(i + 'a') << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << '~' << endl;
    }
}