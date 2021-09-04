#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool check(int a, int n)
{
    int chan = 0, le = 0;
    while (a > 0)
    {
        if ((a % 10) % 2 == 0)
        {
            chan++;
        }
        else
        {
            le++;
        }
        if (chan > n / 2 || le > n / 2)
        {
            return false;
        }
        a /= 10;
    }
    return true;
}
int main()
{
    int n, min = 1, max;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        min *= 10;
    }
    max = min * 10;
    int dem = -1;
    for (int i = min; i < max; i++)
    {
        if (check(i, n))
        {
            dem++;
            if (dem == 10)
            {
                dem = 0;
                cout << endl;
            }
            cout << i << " ";
        }
    }

    return 0;
}