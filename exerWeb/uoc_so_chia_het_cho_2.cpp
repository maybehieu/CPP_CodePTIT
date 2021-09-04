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
        int n, dem = 0;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    dem++;
                }
                int temp = n / i;
                if (temp % 2 == 0 && temp != i)
                {
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }

    return 0;
}