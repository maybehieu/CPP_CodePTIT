#include <iostream>
#include <string.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
typedef struct
{
    string maSV, name, lop, email, nganh;
} SinhVien;

void in(SinhVien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].maSV;
        scanf("\n");
        getline(cin, a[i].name);
        cin >> a[i].lop >> a[i].email;
        for (int j = 3; j <= 6; j++)
        {
            a[i].nganh += a[i].maSV[j];
        }
    }
}
bool check(SinhVien a)
{
    if (a.nganh == "DCCN" || a.nganh == "DCAT")
    {
        if (a.lop[0] == 'E')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N, q;
    cin >> N;
    SinhVien ds[N + 2];
    in(ds, N);
    cin >> q;
    while (q--)
    {
        std::string s, Nganh;
        scanf("\n");
        getline(cin, Nganh);
        if (Nganh == "Ke toan")
        {
            s = "DCKT";
        }
        else if (Nganh == "Vien thong")
        {
            s = "DCVT";
        }
        else if (Nganh == "Dien tu")
        {
            s = "DCDT";
        }
        else if (Nganh == "Cong nghe thong tin")
        {
            s = "DCCN";
        }
        else if (Nganh == "An toan thong tin")
        {
            s = "DCAT";
        }
        transform(Nganh.begin(), Nganh.end(), Nganh.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << Nganh << ":\n";
        for (int i = 0; i < N; i++)
        {
            if (s == ds[i].nganh && check(ds[i]))
            {
                cout << ds[i].maSV << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].email << endl;
            }
        }
    }

    return 0;
}