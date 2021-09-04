#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y')
        {
            cout << "." << s[i];
        }
    }
    return 0;
}