#include <iostream>
#include <string.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

typedef struct
{
    int stt;
    string masv;
    string name;
    string lop;
    string email;
    string dn;
} DanhSach;
bool can_swap(DanhSach a, DanhSach b)
{
    return a.name < b.name;
}
int main()
{
    int n;
    cin >> n;
    DanhSach a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        cin >> a[i].masv;
        scanf("\n");
        getline(cin, a[i].name);
        cin >> a[i].lop >> a[i].email >> a[i].dn;
    }
    std::sort(a, a + n, can_swap);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s == a[i].dn)
            {
                cout << a[i].stt << " " << a[i].masv << " " << a[i].name << " " << a[i].lop << " " << a[i].email << " " << a[i].dn << endl;
            }
        }
    }
    return 0;
}