#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
long long uoc(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}
int main()
{
    int n;
    cin >> n;
    int m;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int temp = 0;
        while (m > 1)
        {
            temp = uoc(m);
            sum += temp;
            m /= temp;
        }
    }
    cout << sum;
    return 0;
}