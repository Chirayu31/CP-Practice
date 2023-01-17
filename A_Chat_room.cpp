#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string hello = "hello";
    int n = s.length();

    int i = 0;
    int j = 0;
    while (i < n && j < 5)
    {
        if (s[i] == hello[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == 5)
        cout << "YES";
    else
        cout << "NO";
}