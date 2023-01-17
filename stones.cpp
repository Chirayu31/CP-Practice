#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        char a = s[i];
        char b = s[i - 1];
        if (a == b)
            count++;
    }
    cout << count;
    return 0;
}