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
        string s;
        cin >> s;
        bool arr[26];
        memset(arr, 0, sizeof(arr));
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[s[i] - 'A'])
            {
                ans = false;
                break;
            }
            else
            {
                arr[s[i] - 'A'] = true;
                while (s[i + 1] == s[i])
                    i++;
            }
        }
        if (ans)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}