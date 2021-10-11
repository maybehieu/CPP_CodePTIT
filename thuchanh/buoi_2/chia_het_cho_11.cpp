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
        std::string s;
        cin >> s;
        long long x = 0;
        for (int i = 0; i < s.size(); i++)
        {
            x = (x * 10 + (s[i] - '0')) % 11;
        }
        if (x == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}