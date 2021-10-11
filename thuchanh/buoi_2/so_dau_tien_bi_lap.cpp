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
        int arr[n], check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    cout << arr[i] << endl;
                    check = 1;
                    break;
                }
            }
            if (check)
            {
                break;
            }
        }
        if (!check)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}