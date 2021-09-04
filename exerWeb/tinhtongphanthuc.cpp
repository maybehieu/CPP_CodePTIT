#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0 / i);
    }
    cout << std::fixed << std::setprecision(4);
    cout << sum;

    return 0;
}