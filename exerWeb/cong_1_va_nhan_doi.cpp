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
        }
        int dem = 0;
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            int x = arr[i];
            while (x > 0)
            {
                if (x % 2 == 0)
                {
                    x /= 2;
                    cnt++;
                }
                if (x % 2 == 1)
                {
                    x -= 1;
                    dem++;
                }
            }
            m = std::max(m, cnt);
        }
        cout << m + dem << endl;
    }
    return 0;
}