#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int arr[26] = {0};
    char c = 'a';
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }

    for (int i = 25; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            int x = arr[i];
            while (x-- > 0)
                cout << (char)(i + 'a');
            break;
        }
    }
    return 0;
}