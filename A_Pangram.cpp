#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> check(26, 0);

    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
        check[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (check[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}