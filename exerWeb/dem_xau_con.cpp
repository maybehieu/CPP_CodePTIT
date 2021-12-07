#include <iostream>
#include <map>
#include <string.h>

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
        int k;
        cin >> s >> k;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            std::map<char, int> res;
            for (int j = i; j < s.size(); j++)
            {
                res[s[j]]++;
                if (res.size() == k)
                {
                    count++;
                }
                if (res.size() > k)
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}