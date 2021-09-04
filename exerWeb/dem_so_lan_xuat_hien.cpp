#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], dem = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == k)
            {
                dem++;
            }
        }
        if (!dem)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dem << endl;
        }
    }

    return 0;
}