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
        int danhdau[300] = {};
        for (int i = 0; i < s.length(); i++)
        {
            danhdau[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (danhdau[s[i]] == 1)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}