#include <bits/stdc++.h>
using namespace std;
int arr[55];
int main()
{
    memset(arr, -1, sizeof(arr));
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (arr[v[i]] == -1)
            arr[v[i]] = i + 1;
    }

    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        cout << arr[t] << " ";
        for (int j = 0; j < 55; j++)
        {
            if (arr[j] != -1 && arr[j] < arr[t])
                arr[j]++;
        }
        arr[t] = 1;
    }
}