#include <iostream>
#include <string>
#include <algorithm>

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
        std::string s;
        cin >> s;
        std::string cpy = s;
        std::reverse(cpy.begin(), cpy.end());
        int temp = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (cpy[i] == '1')
            {
                if (i % 4 == 0)
                {
                    temp += 1;
                }
                else if (i % 4 == 1)
                {
                    temp += 2;
                }
                else if (i % 4 == 2)
                {
                    temp += 4;
                }
                else if (i % 4 == 3)
                {
                    temp += 3;
                }
            }
        }
        if (temp % 5 == 0 && temp != 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}