#include <iostream>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int arr[26] = {0};

    for (int i = 0; i < s1.length(); i++)
        arr[s1[i] - 65]++;

    for (int i = 0; i < s2.length(); i++)
        arr[s2[i] - 65]++;

    for (int i = 0; i < s3.length(); i++)
        arr[s3[i] - 65]--;
    // cout << arr;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}