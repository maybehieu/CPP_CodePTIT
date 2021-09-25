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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int left = 0, right = n - 1, dem = 0;
        while (left <= right)
        {
            if (arr[left] == arr[right])
            {
                left++, right--;
            }
            else if (arr[left] < arr[right])
            {
                left++;
                arr[left] += arr[left - 1];
                dem++;
            }
            else
            {
                right--;
                arr[right] += arr[right + 1];
                dem++;
            }
        }
        cout << dem << endl;
    }

    return 0;
}