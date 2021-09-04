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
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }

    return 0;
}