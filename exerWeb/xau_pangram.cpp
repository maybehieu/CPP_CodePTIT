#include <iostream>
#include <string>

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
        int n, danhdau[300] = {};
        cin >> n;
        std::cin.ignore();
        for (int i = 0; i < s.length(); i++)
        {
            danhdau[s[i]]++;
        }
        for (int i = 97; i <= 122; i++)
        {
            if (danhdau[i] == 0)
            {
                n--;
            }
        }
        if (n < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}