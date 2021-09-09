#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

using std::cin;
using std::cout;
using std::endl;
std::map<std::string, int> emailList;
std::map<std::string, int>::iterator pointer;
int main()
{
    int test;
    cin >> test;
    std::cin.ignore();
    while (test--)
    {
        std::string s;
        getline(cin, s);
        std::vector<std::string> a;
        std::stringstream ss(s);
        std::string p;
        while (ss >> p)
        {
            for (int i = 0; i < p.size(); i++)
            {
                p[i] = tolower(p[i]);
            }
            a.push_back(p);
        }
        std::string output;
        output += a[a.size() - 1];
        for (int i = 0; i <= a.size() - 2; i++)
        {
            output += a[i][0];
        }
        pointer = emailList.find(output);
        if (pointer != emailList.end())
        {
            cout << output << ++emailList[output] << "@ptit.edu.vn";
        }
        else
        {
            emailList[output] = 1;
            cout << output << "@ptit.edu.vn";
        }
        cout << endl;
    }

    return 0;
}