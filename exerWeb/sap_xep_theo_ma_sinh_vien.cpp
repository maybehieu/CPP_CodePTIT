#include <iostream>
#include <string.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

typedef struct
{
    string maSV, name, lop, email;
} SinhVien;
void output(SinhVien &a)
{
    cout << a.maSV << " " << a.name << " " << a.lop << " " << a.email << endl;
}
bool can_swap(SinhVien a, SinhVien b)
{
    return a.maSV < b.maSV;
}
int main()
{
    int i = 0;
    SinhVien ds[10000] = {};
    while (cin >> ds[i].maSV)
    {
        scanf("\n");
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].email;
        i++;
    }
    std::sort(ds, ds + i, can_swap);
    for (int j = 0; j < i; j++)
    {
        output(ds[j]);
    }
    return 0;
}