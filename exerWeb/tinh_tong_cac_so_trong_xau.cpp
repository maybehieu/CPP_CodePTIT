#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

bool check(char x)
{
    return (x >= '0' && x <= '9');
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string s;
        cin >> s;
        std::vector<long long> res;
        long long temp = 0, sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (check(s[i]))
            {
                temp = temp * 10 + (s[i] - '0');
            }
            if (check(s[i]) && !check(s[i + 1]))
            {
                res.push_back(temp);
                temp = 0;
            }
        }
        for (auto &&i : res)
        {
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}