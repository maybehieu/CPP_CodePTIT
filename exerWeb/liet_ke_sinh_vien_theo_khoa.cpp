#include <iostream>
#include <string.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
typedef struct
{
    string maSV, name, lop, email, khoa;
} SinhVien;

void in(SinhVien &a)
{
    cin >> a.maSV;
    scanf("\n");
    getline(cin, a.name);
    cin >> a.lop >> a.email;
    for (int i = 1; i < 3; i++)
    {
        a.khoa += a.lop[i];
    }
}
void out(SinhVien &a)
{
    cout << a.maSV << " " << a.name << " " << a.lop << " " << a.email << endl;
}
int main()
{
    int N, i, q;
    cin >> N;
    SinhVien ds[N + 1];
    for (int i = 0; i < N; i++)
    {
        in(ds[i]);
    }
    cin >> q;
    while (q--)
    {
        std::string s, nam;
        cin >> nam;
        s += nam[2];
        s += nam[3];
        cout << "DANH SACH SINH VIEN KHOA " << nam << ":\n";
        for (int i = 0; i < N; i++)
        {
            if (s == ds[i].khoa)
            {
                out(ds[i]);
            }
        }
    }

    return 0;
}