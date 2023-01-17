#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    string a, b;
    int score_a = 0, score_b = 0;
    while (n-- > 0)
    {
        string x;
        cin >> x;
        if (a.length() == 0)
        {
            a = x;
            score_a++;
        }
        else if (b.length() == 0 && a.length() != 0 && x != a)
        {
            b = x;
            score_b++;
        }
        else
        {
            if (x == a)
                score_a++;
            else
                score_b++;
        }
    }

    if (score_a > score_b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
}