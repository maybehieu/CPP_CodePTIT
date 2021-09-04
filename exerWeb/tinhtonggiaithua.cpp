#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    long long giaithua = 1, tong = 0;
    for (int i = 1; i <= n; i++)
    {
        giaithua *= i;
        tong += giaithua;
    }
    cout << tong;
    return 0;
}