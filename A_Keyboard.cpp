#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    string s;
    cin >> c >> s;

    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (c == 'R')
    {
        for (int i = 0; i < s.length(); i++)
        {
            char l = s[i];
            for (int j = 0; j < s1.length(); j++)
            {
                if (l == s1[j])
                {
                    cout << s1[j - 1];
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            char l = s[i];
            for (int j = 0; j < s1.length(); j++)
            {
                if (l == s1[j])
                {
                    cout << s1[j + 1];
                }
            }
        }
    }
}