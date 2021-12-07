#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

float diem[] = {0, 0, 0, 2.5, 2.5, 3, 3, 3.5, 3.5, 3.5, 4, 4, 4, 4.5, 4.5, 4.5, 5, 5, 5, 5, 5.5, 5.5, 5.5, 6, 6, 6, 6, 6.5, 6.5, 6.5, 7, 7, 7, 7.5, 7.5, 8, 8, 8.5, 8.5, 9, 9};
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        float m, n, sum = 0;
        cin >> x >> y >> m >> n;
        sum = m + n;
        sum += diem[x] + diem[y];
        sum /= 4.0;
        y = sum;
        sum *= 100.0;
        x = sum;
        x %= 100;
        sum /= 100;
        if (x >= 25 && x < 75)
        {
            sum = y + 0.5;
            cout << std::fixed << std::setprecision(1) << sum << endl;
        }
        else if (x >= 75)
        {
            sum = y + 1;
            cout << std::fixed << std::setprecision(1) << sum << endl;
        }
        else if (x < 25)
        {
            sum = y + 0.0;
            cout << std::fixed << std::setprecision(1) << sum << endl;
        }
        else
        {
            cout << std::fixed << std::setprecision(1) << sum << endl;
        }
    }

    return 0;
}