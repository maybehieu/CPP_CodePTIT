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
        int n;
        cin >> n;
        int arr[n], sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        cout << (n + 1) * n / 2 - sum << endl;
    }

    return 0;
}