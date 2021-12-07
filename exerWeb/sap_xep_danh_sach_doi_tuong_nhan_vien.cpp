#include <iostream>
#include <string.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

int k = 0;
class NhanVien
{
private:
    string maNV, name, gender, doB, addr, id, date;
    string d, m, y;

public:
    NhanVien();
    ~NhanVien();
    friend istream &operator>>(istream &is, NhanVien &a);
    friend ostream &operator<<(ostream &os, NhanVien &a);

    string getdoB()
    {
        return doB;
    }
    string getD()
    {
        return d;
    }
    string getM()
    {
        return m;
    }
    string getY()
    {
        return y;
    }
};

NhanVien::NhanVien()
{
    maNV = {}, name = {}, gender = {}, doB = {}, addr = {}, id = {}, date = {};
    d = {}, m = {}, y = {};
}

NhanVien::~NhanVien()
{
    k = 0;
}
istream &operator>>(istream &is, NhanVien &a)
{
    k++;
    if (k < 10)
    {
        a.maNV = "0000";
        a.maNV += std::to_string(k);
    }
    else
    {
        a.maNV = "000";
        a.maNV += std::to_string(k);
    }
    scanf("\n");
    getline(is, a.name);
    is >> a.gender >> a.doB;
    scanf("\n");
    getline(is, a.addr);
    is >> a.id >> a.date;
    a.d += a.doB[3], a.d += a.doB[4];
    a.m += a.doB[0], a.m += a.doB[1];
    a.y += a.doB[6], a.y += a.doB[7], a.y += a.doB[8], a.y += a.doB[9];
    return is;
}
ostream &operator<<(ostream &os, NhanVien &a)
{
    os << a.maNV << " " << a.name << " " << a.gender << " " << a.doB << " " << a.addr << " " << a.id << " " << a.date << endl;
    return os;
}

bool can_swap(NhanVien a, NhanVien b)
{
    if (a.getY() < b.getY())
        return true;
    else if (a.getY() == b.getY() && a.getM() < b.getM())
        return true;
    else if (a.getY() == b.getY() && a.getM() == b.getM() && a.getD() < b.getD())
        return true;
    else
        return false;
}
void sapxep(NhanVien *a, int n)
{
    std::sort(a, a + n, can_swap);
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}