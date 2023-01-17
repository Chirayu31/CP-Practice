#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count_lucky = 0;

    if (s.length() <= 1)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] - '0';
        if (x == 4 || x == 7)
        {
            count_lucky++;
        }
    }
    if (count_lucky == 4 || count_lucky == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}