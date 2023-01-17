#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length(), m = b.length();
        if (a[n - 1] == 'S')
        {
            if (b[m - 1] == 'S')
            {
                if (n > m)
                {
                    cout << "<\n";
                }
                else if (n < m)
                {
                    cout << ">\n";
                }
                else
                    cout << "=\n";
            }
            if (b[m - 1] == 'M')
            {
                cout << "<\n";
            }
            if (b[m - 1] == 'L')
            {
                cout << "<\n";
            }
        }
        if (a[n - 1] == 'M')
        {
            if (b[m - 1] == 'S')
            {

                cout << ">\n";
            }
            if (b[m - 1] == 'M')
            {
                cout << "=\n";
            }
            if (b[m - 1] == 'L')
            {
                cout << "<\n";
            }
        }
        if (a[n - 1] == 'L')
        {
            if (b[m - 1] == 'S')
            {

                cout << ">\n";
            }
            if (b[m - 1] == 'M')
            {
                cout << ">\n";
            }
            if (b[m - 1] == 'L')
            {
                if (n > m)
                {
                    cout << ">\n";
                }
                else if (n < m)
                {
                    cout << "<\n";
                }
                else
                    cout << "=\n";
            }
        }
    }
}