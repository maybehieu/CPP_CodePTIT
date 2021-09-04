#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, dem = 0, arr[10005] = {};
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            while (n % i == 0)
            {
                arr[dem++] = i;
                n /= i;
            }
        }
        if (n > 1)
        {
            arr[dem++] = n;
        }
        if (dem == 3 && arr[0] != arr[1] && arr[1] != arr[2])
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}