#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
void solve(std::string &s, long long &n, long long &l)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '6')
        {
            s[i] = '5';
        }
        n = n * 10 + (s[i] - '0');
        if (s[i] == '5')
        {
            s[i] = '6';
        }
        l = l * 10 + (s[i] - '0');
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string s1, s2;
        cin >> s1 >> s2;
        long long n1 = 0, n2 = 0, l1 = 0, l2 = 0;
        solve(s1, n1, l1);
        solve(s2, n2, l2);
        cout << n1 + n2 << " " << l1 + l2 << endl;
    }

    return 0;
}