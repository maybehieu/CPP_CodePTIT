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
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        std::stable_sort(a, a + n);
        long long count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int index = a[i] + k;
            int temp = std::lower_bound(a + i, a + n, index) - a;
            int x = temp - i - 1;
            count += x;
        }
        cout << count << endl;
    }
}