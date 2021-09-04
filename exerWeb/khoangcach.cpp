#include <iostream>
#include <math.h>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        double x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double ans = std::sqrt(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) * 1.0);
        cout << std::fixed << std::setprecision(4);
        cout << ans << endl;
    }

    return 0;
}
