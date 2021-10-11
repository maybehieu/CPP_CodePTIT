#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
void solve(std::string &s)
{
    int pos = -1, temp = -1;
    char max = -1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            temp = i;
        }
    }
    if (temp == -1)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = temp + 1; i < s.size(); i++)
    {
        if (s[i] < s[temp] && max < s[i])
        {
            max = s[i], pos = i;
        }
    }
    std::swap(s[temp], s[pos]);
    cout << s << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string s;
        cin >> s;
        solve(s);
    }

    return 0;
}