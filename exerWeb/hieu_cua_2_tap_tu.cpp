#include <iostream>
#include <string>
#include <sstream>
#include <set>

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
        std::string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        std::set<std::string> res;
        std::set<std::string>::iterator pointer;
        std::stringstream ss(s1);
        std::string token;
        while (ss >> token)
        {
            res.insert(token);
        }
        std::stringstream ss2(s2);
        while (ss2 >> token)
        {
            res.erase(token);
        }
        for (pointer = res.begin(); pointer != res.end(); pointer++)
        {
            cout << *pointer << " ";
        }
        cout << endl;
    }

    return 0;
}