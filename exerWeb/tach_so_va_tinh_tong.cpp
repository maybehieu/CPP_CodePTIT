#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string s;
        cin >> s;
        int sum = 0;
        std::string res;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= '9' && s[i] >= '0')
            {
                sum += s[i] - '0';
            }
            else
            {
                res.push_back(s[i]);
            }
        }
        std::sort(res.begin(), res.end());
        cout << res << sum << endl;
    }

    return 0;
}