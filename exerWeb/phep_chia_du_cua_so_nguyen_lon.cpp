#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string so;
        long long m, n = 0;
        cin >> so >> m;
        for (int i = 0; i < so.size(); i++)
        {
            int temp = so[i] - '0';
            n = (n * 10) % m + temp;
            n %= m;
        }
        cout << n % m << endl;
    }

    return 0;
}