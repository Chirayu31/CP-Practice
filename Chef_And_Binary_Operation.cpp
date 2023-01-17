#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int cnt0 = 0, cnt1 = 0;

        for (int i = 0; i < s1.length(); i++)
        {

            if (s1[i] != s2[i])
            {
                if (s1[i] == '0')
                    cnt0++;
                else
                    cnt1++;
            }
        }
        bool flag = true;
        for (int i = 1; i < s1.length(); i++)
        {
            if (s1[i] == s1[i - 1] && flag)
                ;
            else
                flag = false;
        }

        if (flag)
        {
            cout << "Unlucky Chef" << endl;
        }

        else
            cout << "Lucky Chef\n"
                 << max(cnt0, cnt1) << endl;
    }
}