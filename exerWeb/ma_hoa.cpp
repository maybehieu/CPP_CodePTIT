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
        int dem = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
                dem++;
            else
            {
                cout << s[i] << dem;
                dem = 1;
            }
        }
        cout << endl;
    }

    return 0;
}