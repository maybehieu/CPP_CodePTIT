#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
bool tang(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] >= s[i + 1])
        {
            return false;
        }
    }

    return true;
}
bool giong(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            return false;
        }
    }

    return true;
}
bool cap(string s)
{
    if (s[0] != s[1] || s[1] != s[2])
    {
        return false;
    }
    if (s[3] != s[4])
    {
        return false;
    }
    return true;
}
bool locphat(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '6' && s[i] != '8')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s;
        for (int i = 5; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                continue;
            }
            s1 += s[i];
        }
        if (s1[0] != s1[1] && tang(s1))
        {
            cout << "YES\n";
        }
        else if (giong(s1) || locphat(s1) || cap(s1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}