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
        cin >> so;
        bool check = false;
        if (so[0] == '0')
        {
            cout << "INVALID" << endl;
            continue;
        }
        int danhdau[11] = {}, dem = 0;
        for (int i = 0; i < so.length(); i++)
        {
            if (so[i] < '0' || so[i] > '9')
            {
                cout << "INVALID" << endl;
                check = true;
                break;
            }
            danhdau[so[i] - '0']++;
            if (danhdau[so[i] - '0'] == 1)
            {
                dem++;
                if (dem == 10)
                {
                    cout << "YES" << endl;
                    check = true;
                    break;
                }
            }
        }
        if (!check)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}