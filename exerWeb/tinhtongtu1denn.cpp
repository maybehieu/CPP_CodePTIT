#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long sum = n * (n + 1) / 2;
        cout << sum << endl;
    }

    return 0;
}