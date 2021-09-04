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
        int arr[n], pos = -1, check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == k && !check)
            {
                pos = i + 1;
                check = 1;
            }
        }
        cout << pos << endl;
    }

    return 0;
}