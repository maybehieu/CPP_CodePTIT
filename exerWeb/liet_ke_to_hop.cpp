#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int n, k, arr[10000];
void sinh(int i)
{
    for (int j = arr[i - 1] + 1; j <= n - k + i; j++)
    {
        arr[i] = j;
        if (i == k)
        {
            for (int m = 1; m <= k; m++)
            {
                cout << arr[m];
            }
            cout << " ";
        }
        else
        {
            sinh(i + 1);
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        sinh(1);
        cout << endl;
    }

    return 0;
}