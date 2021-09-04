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
    int uocArr[10000], dem[10000], step = 0;
    long long n;
    cin >> n;
    while (n > 1)
    {
        uocArr[step] = uoc(n);
        while (n % uocArr[step] == 0)
        {
            dem[step]++, n /= uocArr[step];
        }
        step++;
    }
    for (int i = 0; i < step; i++)
    {
        cout << uocArr[i] << " " << dem[i] << endl;
    }

    return 0;
}