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
        int arr[n], index = -1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        long long temp = 0;
        for (int i = 1; i < n; i++)
        {
            temp += arr[i - 1];
            if (temp * 2 == (sum - arr[i]))
            {
                index = i + 1;
                break;
            }
        }
        cout << index << endl;
    }

    return 0;
}