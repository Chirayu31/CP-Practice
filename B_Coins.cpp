#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v(3);
    cin >> v[0] >> v[1] >> v[2];
    int a = 0, b = 0, c = 0;

    for (int i = 0; i < 3; i++)
    {
        if (v[i][1] == '>')
        {
            if (v[i][0] == 'A')
                a++;

            if (v[i][0] == 'B')
                b++;

            if (v[i][0] == 'C')
                c++;
        }
        else if (v[i][1] == '<')
        {
            if (v[i][2] == 'A')
                a++;

            if (v[i][2] == 'B')
                b++;

            if (v[i][2] == 'C')
                c++;
        }
    }

    // cout << a << " " << b << " " << c;
    if (a == b || b == c || a == c)
    {
        cout << "Impossible";
    }
    else
    {
        if (a > b && a > c)
        {
            if (b > c)
                cout << "CB";
            else
                cout << "BC";
            cout << 'A';
        }

        if (b > a && b > c)
        {

            if (a > c)
                cout << "CA";

            else
                cout << "AC";
            cout << 'B';
        }

        if (c > a && b < c)
        {

            if (b > a)
                cout << "AB";

            else
                cout << "BA";

            cout << 'C';
        }
    }
}