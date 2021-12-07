#include <iostream>
#include <fstream>
#include <string.h>
#include <climits>

using std::cin;
using std::cout;
using std::endl;
using std::string;
bool check(string s)
{
    if (s.size() > 9)
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    std::ifstream fp("DATA.in");
    long long sum = 0;
    string s;
    while (fp >> s)
    {
        if (check(s) && std::stoi(s) <= INT_MAX)
        {
            sum += std::stoi(s);
        }
    }
    cout << sum << endl;
    return 0;
}