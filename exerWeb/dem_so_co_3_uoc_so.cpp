#include <iostream>
#include <math.h>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
std::vector<int> ngTo, arr;
void sangEra()
{
    ngTo.resize(1e6 + 1, 0);
    for (int i = 2; i <= 1e3; i++)
    {
        if (ngTo[i] == 0)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                ngTo[j] = 1;
            }
        }
    }
    for (int i = 2; i < 1e6; i++)
    {
        if (!ngTo[i])
        {
            arr.push_back(i);
        }
    }
}
int main()
{
    sangEra();
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        int dem = 0, pos = 0;
        cin >> n;
        while (arr[pos++] <= sqrt(n))
        {
            dem++;
        }

        cout << dem << endl;
    }

    return 0;
}