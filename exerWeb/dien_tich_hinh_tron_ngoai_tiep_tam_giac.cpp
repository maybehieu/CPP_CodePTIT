#include <iostream>
#include <math.h>
#include <iomanip>
#define PI 3.141592653589793238

using std::cin;
using std::cout;
using std::endl;
double a1, a2, b1, b2, c1, c2;
double a, b, c;

bool check()
{
    a = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
    b = sqrt((c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2));
    c = sqrt((a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2));
    if (a + b > c && b + c > a && c + a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    double s = sqrt((a + b + c) * (a + b - c) * (b + c - a) * (a + c - b)) / 4;
    double r = a * b * c / (4 * s);
    double res = PI * r * r;
    cout << std::fixed << std::setprecision(3) << res << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        if (!check())
            cout << "INVALID" << endl;
        else
        {
            solve();
        }
    }
    return 0;
}