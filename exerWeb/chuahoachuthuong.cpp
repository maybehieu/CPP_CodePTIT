#include <iostream>
// #include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;

    cin >> test;
    std::cin.ignore();
    while (test--)
    {
        char s;
        cin >> s;
        if (std::isupper(s))
        {
            cout << (char)std::towlower(s) << endl;
        }
        else
        {
            cout << (char)std::toupper(s) << endl;
        }
    }

    return 0;
}