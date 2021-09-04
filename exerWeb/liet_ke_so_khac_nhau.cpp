#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    std::sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}