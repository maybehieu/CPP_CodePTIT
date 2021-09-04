#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::map<int, int> danhdau;
        int n, res = -1, temp, check = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            temp = 0;
            cin >> temp;
            danhdau[temp]++;
            if (danhdau[temp] == 2 && !check)
            {
                res = temp;
                check = 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}