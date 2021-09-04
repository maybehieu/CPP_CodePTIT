#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int check(int a, int b)
{
    for (int i = 0; i < b; i++)
    {
        if ((a * i) % b == 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, m;
        cin >> a >> m;
        cout << check(a, m) << endl;
    }

    return 0;
}