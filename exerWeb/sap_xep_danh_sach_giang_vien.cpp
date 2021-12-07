#include <iostream>
#include <string.h>
#include <sstream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

typedef struct
{
    string name, major, sj, firstName;
    string stt = "GV";
} list;
bool can_swap(list a, list b)
{
    if (a.firstName == b.firstName)
    {
        return a.stt < b.stt;
    }
    return a.firstName < b.firstName;
}

int main()
{
    int n;
    cin >> n;
    list a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].name);
        scanf("\n");
        getline(cin, a[i].major);
        if (i + 1 < 10)
        {
            a[i].stt += "0";
            a[i].stt += std::to_string(i + 1);
        }
        else
        {
            a[i].stt += std::to_string(i + 1);
        }
        std::stringstream ss(a[i].major);
        string token;
        while (ss >> token)
        {
            token[0] = toupper(token[0]);
            a[i].sj += token[0];
        }
        std::stringstream ss1(a[i].name);
        while (ss1 >> token)
        {
            a[i].firstName = token;
        }
    }
    std::sort(a, a + n, can_swap);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].stt << " " << a[i].name << " " << a[i].sj << endl;
    }
    return 0;
}