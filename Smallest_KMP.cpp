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
        int arr[26] = {0};

        for (int i = 0; i < a.size(); i++)
        {
            char c = a[i];
            arr[c - 'a']++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            char c = b[i];
            arr[c - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            // cout << arr[i] << " ";
            while (arr[i] != 0)
            {
                cout << (char)(i + 'a');
                arr[i]--;
            }
            if (i == b[0] - 'a')
            {
                cout << b;
            }
        }
        cout << endl;
    }
}