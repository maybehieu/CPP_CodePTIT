#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

long long COUNT(string s, int n)
{
    int idx = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        idx = 0;
        for (int j = i; j < s.size(); j++)
        {
            idx = idx * 10 + s[j] - '0';
            if (idx % n == 0)
            {
                count++;
            }
            idx %= n;
        }
    }
    return count;
}
int chiaHet(string s, int k)
{
    int dem = 0;
    int t = 0;
    for (int i = 0; i < s.length(); i++)
    {
        t = t * 10 + s[i] - '0';
        t = t % k;
    }
    if (!t)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        cout << COUNT(s, 8) - COUNT(s, 24) << endl;
    }

    return 0;
}