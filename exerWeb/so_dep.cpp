#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
void check(std::string s)
{
    int length = s.length();
    for (int i = 0; i <= length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            cout << "NO" << endl;
            return;
        }
        if ((s[i] - '0') % 2 != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int test;
    cin >> test;
    std::cin.ignore();
    while (test--)
    {
        std::string so;
        cin >> so;
        check(so);
    }

    return 0;
}