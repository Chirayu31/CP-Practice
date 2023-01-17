#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    int sy1 = 0, sy2 = 0, sy3 = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
            sy1++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
            sy2++;
    }

    for (int i = 0; i < s3.length(); i++)
    {
        if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
            sy3++;
    }

    if (sy1 == 5 && sy2 == 7 && sy3 == 5)
        cout << "YES";
    else
        cout << "NO";
}