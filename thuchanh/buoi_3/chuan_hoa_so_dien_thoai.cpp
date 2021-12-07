#include <iostream>
#include <string.h>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        scanf("\n");
        string a, b, temp;
        getline(cin, a);
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] < '0' || a[i] > '9')
            {
                a[i] = ' ';
            }
        }
        std::stringstream s(a);
        while (s >> temp)
        {
            b += temp;
        }
        if (b[0] == '8' && b[1] == '4')
        {
            cout << "0";
            for (int i = 2; i < b.length(); i++)
            {
                cout << b[i];
            }
        }
        else
        {
            cout << b;
        }
        cout << endl;
    }

    return 0;
}