#include <iostream>
#include <map>
#include <string.h>
#include <algorithm>
#include <utility>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
bool thuanNghich(std::string s)
{
    if (s.size() == 1)
    {
        return false;
    }
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
bool can_swap(std::pair<std::string, int> &a, std::pair<std::string, int> &b)
{
    if (a.first.size() > b.first.size())
    {
        return true;
    }
    else if (a.first.size() == b.first.size())
    {
        return a > b;
    }
    return false;
}
int main()
{
    std::map<std::string, int> a;
    std::vector<std::pair<std::string, int>> res;
    std::string s;
    while (cin >> s)
    {
        if (thuanNghich(s))
        {
            a[s]++;
        }
    }
    for (auto &it : a)
    {
        res.push_back(it);
    }
    std::sort(res.begin(), res.end(), can_swap);
    for (auto &it : res)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}