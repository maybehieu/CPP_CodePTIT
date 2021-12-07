#include <iostream>
#include <string.h>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::vector<std::string> res;
    std::string s;
    bool check = false;
    while (cin >> s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        if (check)
        {
            s[0] -= 32;
            check = false;
        }
        if (s.back() == '.' || s.back() == '!' || s.back() == '?')
        {
            s.back() = '\n';
            check = true;
        }
        res.push_back(s);
    }
    res[0][0] -= 32;
    for (auto &it : res)
    {
        cout << it;
        if (it.back() != '\n')
        {
            cout << " ";
        }
    }

    return 0;
}