#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void input(int *arr, int n, long long &last)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        last += arr[i];
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m, n;
        cin >> n >> m;
        int size = (n > m) ? n : m;
        int arr1[size] = {}, arr2[size] = {};
        long long arr1_first = 0, arr2_first = 0, arr1_last = 0, arr2_last = 0, max = 0;
        input(arr1, n, arr1_last);
        input(arr2, m, arr2_last);
        for (int i = 0; i < size; i++)
        {
            arr1_first += arr1[i], arr1_last -= arr1[i];
            arr2_first += arr2[i], arr2_last -= arr2[i];
            long long max_first = (arr1_first > arr2_first) ? arr1_first : arr2_first;
            long long max_last = (arr1_last > arr2_last) ? arr1_last : arr2_last;
            if (max < max_first + max_last)
            {
                max = max_first + max_last;
            }
        }
        cout << max << endl;
    }

    return 0;
}