#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
struct NhanVien
{
    std::string stt;
    std::string name, gender, dob, address, code, date;
    std::string day, month, year;
};
void nhap(struct NhanVien &a)
{
    scanf("\n");
    getline(cin, a.name);
    cin >> a.gender >> a.dob;
    scanf("\n");
    getline(cin, a.address);
    cin >> a.code >> a.date;
    for (int i = 3; i < 5; i++)
    {
        a.day += a.dob[i];
    }
    for (int i = 0; i < 2; i++)
    {
        a.month += a.dob[i];
    }
    for (int i = 6; i < 10; i++)
    {
        a.year += a.dob[i];
    }
}
bool check(struct NhanVien a, struct NhanVien b)
{
    if (a.year < b.year)
    {
        return true;
    }
    else if (a.year == b.year && a.month < b.month)
    {
        return true;
    }
    else if (a.year == b.year && a.month == b.month && a.day < b.day)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void sapxep(struct NhanVien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].stt = std::to_string(i + 1);
        int k = a[i].stt.size();
        if (k == 1)
        {
            a[i].stt.insert(0, "0000");
        }
        else if (k == 2)
        {
            a[i].stt.insert(0, "000");
        }
    }
    std::sort(a, a + n, check);
}
void inds(struct NhanVien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].stt << " " << a[i].name << " " << a[i].gender << " " << a[i].dob << " ";
        cout << a[i].address << " " << a[i].code << " " << a[i].date << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}