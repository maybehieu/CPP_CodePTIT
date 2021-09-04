#include <iostream>
#include <string>
#include <vector>
#include <sstream>

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
        getline(cin, s);
        std::vector<std::string> rev;
        std::string token;
        std::stringstream ss(s);
        while (ss >> token)
        {
            rev.push_back(token);
        }
        for (int i = rev.size() - 1; i >= 0; i--)
        {
            cout << rev.at(i) << " ";
        }
        cout << endl;
    }

    return 0;
}