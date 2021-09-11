#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
bool check(std::string s)
{
    std::string temp = s;
    std::reverse(temp.begin(), temp.end());
    return temp == s;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string s, temp;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                tolower(s[i]);
            }
            if (s[i] >= 'a' && s[i] <= 'c')
            {
                temp.push_back('2');
            }
            else if (s[i] >= 'd' && s[i] <= 'f')
            {
                temp.push_back('3');
            }
            else if (s[i] >= 'g' && s[i] <= 'i')
            {
                temp.push_back('4');
            }
            else if (s[i] >= 'j' && s[i] <= 'l')
            {
                temp.push_back('5');
            }
            else if (s[i] >= 'm' && s[i] <= 'o')
            {
                temp.push_back('6');
            }
            else if (s[i] >= 'p' && s[i] <= 's')
            {
                temp.push_back('7');
            }
            else if (s[i] >= 't' && s[i] <= 'v')
            {
                temp.push_back('8');
            }
            else if (s[i] >= 'w' && s[i] <= 'z')
            {
                temp.push_back('9');
            }
        }
        if (check(temp))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}