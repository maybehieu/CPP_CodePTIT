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
        std::vector<int> res;
        long long temp = 0, max = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (check(s[i]))
            {
                temp = temp * 10 + (s[i] - '0');
            }
            if (check(s[i]) && !check(s[i + 1]))
            {
                if (max < temp)
                {
                    max = temp;
                }
                temp = 0;
            }
        }
        cout << max << endl;
    }

    return 0;
}