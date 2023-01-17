#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ones = 0, twos = 0, threes = 0, opr = s.length() / 2;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            ones++;
        }
        if (s[i] == '2')
        {
            twos++;
        }
        if (s[i] == '3')
        {
            threes++;
        }
    }

    while (ones-- > 0)
    {
        cout << "1";
        if (opr > 0)
        {
            cout << "+";
            opr--;
        }
    }
    while (twos-- > 0)
    {
        cout << "2";
        if (opr > 0)
        {
            cout << "+";
            opr--;
        }
    }

    while (threes-- > 0)
    {
        cout << "3";
        if (opr > 0)
        {
            cout << "+";
            opr--;
        }
    }

    return 0;
}