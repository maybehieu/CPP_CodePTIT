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
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            long long sum1 = 0, sum2 = 0;
            int size = 0;
            for (int j = i; j < n; j++)
            {
                sum1 += arr1[j];
                sum2 += arr2[j];
                if (sum1 == sum2)
                {
                    size = j - i + 1;
                }
            }
            if (max < size)
            {
                max = size;
            }
        }
        cout << max << endl;
    }

    return 0;
}