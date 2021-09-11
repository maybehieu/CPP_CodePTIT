#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int k;
        cin >> k;
        scanf("\n");
        std::string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        std::stringstream ss(s);
        std::string token;
        std::vector<std::string> res;
        while (ss >> token)
        {
            token[0] -= 32;
            res.push_back(token);
        }
        if (k == 1)
        {
            cout << res.back() << " ";
            for (int i = 0; i < res.size() - 1; i++)
            {
                cout << res[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i < res.size(); i++)
            {
                cout << res[i] << " ";
            }
            cout << res[0] << endl;
        }
    }

    return 0;
}