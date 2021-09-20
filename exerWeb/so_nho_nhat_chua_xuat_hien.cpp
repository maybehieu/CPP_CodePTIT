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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                arr[i] = 0;
                i--, n--;
            }
        }
        std::sort(arr, arr + n);
        int min = 1;
        while (true)
        {
            int check = 1;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == min)
                {
                    check = 0;
                    break;
                }
            }
            if (check == 0)
            {
                min++;
            }
            else
            {
                break;
            }
        }
        cout << min << endl;
    }

    return 0;
}