#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        long long arr[n], arr2[n];
        int pos = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                arr2[pos++] = arr[i];
            }
            else
            {
                count++;
            }
        }
        for (int i = 0; i < n - count; i++)
        {
            cout << arr2[i] << " ";
        }
        for (int i = 0; i < count; i++)
        {
            cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}