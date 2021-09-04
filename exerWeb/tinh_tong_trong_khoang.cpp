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
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a[q], b[q];
        for (int i = 0; i < q; i++)
        {
            cin >> a[i] >> b[i];
            a[i]--, b[i]--;
        }
        for (int i = 0; i < q; i++)
        {
            long long sum = 0;
            for (int j = a[i]; j <= b[i]; j++)
            {
                sum += arr[j];
            }
            cout << sum << endl;
        }
    }

    return 0;
}