#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }

    int odd_count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 0)
            odd_count++;
    }

    if (odd_count % 2 == 0 && odd_count != 0)
    {
        cout << "Second";
    }
    else
    {
        cout << "First";
    }
}