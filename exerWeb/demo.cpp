#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    double sum = 0;
    for (int i = 1, j = 2; i <= n, j <= n + 1; i++, j++)
    {
        sum += 1.0 / (i + j);
    }

    return 0;
}