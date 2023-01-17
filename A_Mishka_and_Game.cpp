#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int chris = 0, misi = 0;
    while (n--)
    {
        int c, m;
        cin >> m >> c;

        if (m > c)
        {
            misi++;
        }
        else if (m < c)
        {
            chris++;
        }
    }

    if (chris == misi)
        cout << "Friendship is magic!^^";
    else if (chris > misi)
        cout << "Chris";
    else
        cout << "Mishka";
}