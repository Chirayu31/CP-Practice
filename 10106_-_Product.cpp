#include <bits/stdc++.h>
using namespace std;

string multiply(string n1, string n2)
{
    int l1 = n1.size();
    int l2 = n2.size();

    if (l1 == 0 || l2 == 0)
        return 0;

    vector<int> result(l1 + l2, 0);

    int i_n1 = 0, i_n2 = 0;

    for (int i = l1 - 1; i >= 0; i--)
    {
        int carry = 0;

        int num1 = n1[i] - '0';

        i_n2 = 0;

        for (int j = l2 - 1; j >= 0; j--)
        {
            int num2 = n2[j] - '0';

            int sum = (num1 * num2) + result[i_n1 + i_n2] + carry;

            carry = sum / 10;

            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        i_n1++;
    }

    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
    {
        i--;
    }

    if (i == -1)
        return 0;

    string s = "";

    while (i >= 0)
        s += to_string(result[i--]);

    return s;
}

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        cout << multiply(a, b) << endl;
    }
    return 0;
}