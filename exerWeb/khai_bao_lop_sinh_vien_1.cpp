#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>

#define a() a
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class SinhVien
{
private:
    std::string name, lop, dob;
    float gpa;

public:
    SinhVien();
    ~SinhVien();
    void input(SinhVien &a)
    {
        scanf("\n");
        getline(cin, a.name);
        cin >> a.lop >> a.dob >> a.gpa;
    }
    void solve(SinhVien &a)
    {
        if (a.dob[2] != '/')
            a.dob.insert(0, "0");
        if (a.dob[5] != '/')
            a.dob.insert(3, "0");
    }
    void output(SinhVien a)
    {
        cout << "B20DCCN001 Nguyen Van A " << a.lop << " " << a.dob << " ";
        cout << std::fixed << std::setprecision(2) << a.gpa << endl;
    }
};

SinhVien::SinhVien()
{
    name = {}, lop = {}, dob = {};
    gpa = 0;
}

SinhVien::~SinhVien()
{
}
void nhap(SinhVien &a)
{
    a.input(a);
}
void in(SinhVien &a)
{
    a.solve(a);
    a.output(a);
}

int main()
{
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}