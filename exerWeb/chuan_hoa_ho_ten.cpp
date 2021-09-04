#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s;
    getline(cin, s);
    std::vector<std::string> a;
    std::stringstream ss(s);
    std::string p;
    while (ss >> p)
        a.push_back(p);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] <= 'Z' && a[i][j] >= 'A')
                a[i][j] += 32;
        }
    }
    for (int i = 0; i < a.size() - 1; i++)
    {
        a[i][0] -= 32;
    }
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (i == a.size() - 2)
            cout << a[i];
        else
            cout << a[i] << " ";
    }
    for (int i = 0; i < a[a.size() - 1].size(); i++)
    {
        a[a.size() - 1][i] -= 32;
    }
    cout << ", " << a[a.size() - 1];
    return 0;
}