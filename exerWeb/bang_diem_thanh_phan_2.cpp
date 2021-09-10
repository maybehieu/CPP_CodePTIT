#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
typedef struct
{
    std::string maSV;
    std::string name;
    std::string lop;
    float diem1, diem2, diem3;
} SinhVien;
bool check(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}
void in(SinhVien &a)
{
    scanf("\n");
    getline(cin, a.maSV);
    scanf("\n");
    getline(cin, a.name);
    scanf("\n");
    getline(cin, a.lop);
    cin >> a.diem1 >> a.diem2 >> a.diem3;
}
void out(SinhVien a)
{
    cout << " " << a.maSV << " " << a.name << " " << a.lop << " ";
    cout << std::fixed << std::setprecision(1) << a.diem1 << " " << a.diem2 << " " << a.diem3 << endl;
}
int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++)
    {
        in(a[i]);
    }
    std::sort(a, a + n, check);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        out(a[i]);
    }

    return 0;
}