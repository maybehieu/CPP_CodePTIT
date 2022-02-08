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
        int n, diem;
        cin >> n;
        // if (n <= 445)
        // {
        //     diem = -1;
        // }
        if (n >= 730)
        {
            diem = 10;
        }
        else if (n >= 450 && n < 525)
        {
            diem = 7;
        }
        else if (n >= 525 && n < 600)
        {
            diem = 8;
        }
        else if (n >= 600 && n < 730)
        {
            diem = 9;
        }
        else
        {
            diem = -1;
        }

        cout << diem << endl;
    }

    return 0;
}