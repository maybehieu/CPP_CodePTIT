#include <iostream>
#include <string.h>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct SinhVien
{
    string stt;
    string name, lop, bday;
    float gpa;
};
void nhap(struct SinhVien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = i + 1;
        a[i].stt = std::to_string(k);
        if (a[i].stt.size() == 1)
        {
            a[i].stt.insert(0, "00");
        }
        else if (a[i].stt.size() == 2)
        {
            a[i].stt.insert(0, "0");
        }
        a[i].stt.insert(0, "B20DCCN");
        scanf("\n");
        getline(cin, a[i].name);
        cin >> a[i].lop >> a[i].bday >> a[i].gpa;
    }
}
void birthday(string &s)
{
    if (s[2] != '/')
    {
        s.insert(0, "0");
    }
    if (s[5] != '/')
    {
        s.insert(3, "0");
    }
}
void in(struct SinhVien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        birthday(a[i].bday);
        cout << a[i].stt << " " << a[i].name << " " << a[i].lop << " " << a[i].bday << " ";
        cout << std::fixed << std::setprecision(2) << a[i].gpa << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}