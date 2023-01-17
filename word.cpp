#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int uppercase_count = 0, lowercase_count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            uppercase_count++;
        else if (s[i] >= 97 && s[i] <= 122)
            lowercase_count++;
    }

    if (uppercase_count > lowercase_count)
    {

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
        }
    }
    cout << s;
}