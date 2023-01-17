#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << ((double)sum / (double)n);

    return 0;
}