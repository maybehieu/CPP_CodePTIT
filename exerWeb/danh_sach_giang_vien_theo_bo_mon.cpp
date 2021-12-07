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
    string name, major, sj, fistname;
    string stt = "GV";
} list;
bool can_swap(list a, list b)
{
    if (a.fistname == b.fistname)
    {
        return a.stt < b.stt;
    }
    return a.fistname < b.fistname;
}
void solve(string &major, string &sj)
{
    std::stringstream ss(major);
    string token;
    while (ss >> token)
    {
        token[0] = toupper(token[0]);
        sj += token[0];
    }
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
        solve(a[i].major, a[i].sj);
        std::stringstream ss1(a[i].name);
        string token;
        while (ss1 >> token)
        {
            a[i].fistname = token;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s, s0;
        scanf("\n");
        getline(cin, s);
        solve(s, s0);
        cout << "DANH SACH GIANG VIEN BO MON " << s0 << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (s0 == a[i].sj)
            {
                cout << a[i].stt << " " << a[i].name << " " << a[i].sj << endl;
            }
        }
    }
    return 0;
}