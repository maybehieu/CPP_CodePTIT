#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int count = 1;
class NhanVien
{
private:
    string maNV, name, gender, doB, addr, id, date;

public:
    NhanVien(/* args */);
    ~NhanVien();
    friend std::istream &operator>>(std::istream &is, NhanVien &a);
    friend std::ostream &operator<<(std::ostream &os, NhanVien &a);
};

NhanVien::NhanVien(/* args */)
{
    maNV = {}, name = {}, gender = {}, doB = {}, addr = {}, id = {}, date = {};
}

NhanVien::~NhanVien()
{
    count = 0;
}

std::istream &operator>>(std::istream &is, NhanVien &a)
{
    if (count < 10)
    {
        a.maNV = "0000";
        a.maNV += std::to_string(count);
    }
    else
    {
        a.maNV = "000";
        a.maNV += std::to_string(count);
    }
    count++;
    scanf("\n");
    getline(is, a.name);
    is >> a.gender >> a.doB;
    scanf("\n");
    getline(is, a.addr);
    is >> a.id >> a.date;
    return is;
}
std::ostream &operator<<(std::ostream &os, NhanVien &a)
{
    os << a.maNV << " " << a.name << " " << a.gender << " " << a.doB << " " << a.addr << " " << a.id << " " << a.date << endl;
    return os;
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}