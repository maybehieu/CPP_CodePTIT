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
    std::cin.ignore();
    while (test--)
    {
        std::string s;
        std::vector<std::string> res;
        getline(cin, s);
        std::stringstream ss(s);
        std::string token;
        while (ss >> token)
        {
            res.push_back(token);
        }
        cout << res.size() << endl;
    }

    return 0;
}