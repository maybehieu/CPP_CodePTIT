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
        int arr[n], danhdau[1005] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        std::sort(arr, arr + n);
        int dem = arr[n - 1] - arr[0] + 1;
        dem -= n;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                dem++;
            }
        }
        cout << dem << endl;
    }

    return 0;
}