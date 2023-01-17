#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push('a');
        }
        else
        {

            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                ans++;
            }
        }
    }
    cout << n - (ans + st.size());
}