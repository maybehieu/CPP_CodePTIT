#include <iostream>
#include <string>

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
        int danhdau[1000] = {}, max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            danhdau[s[i]]++;
            if (max < danhdau[s[i]])
            {
                max = danhdau[s[i]];
            }
        }
        if (max <= s.length() - max + 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}