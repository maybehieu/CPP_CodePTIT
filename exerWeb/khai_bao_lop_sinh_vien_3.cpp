#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
#include <sstream>

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
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        scanf("\n");
        getline(is, a.name);
        is >> a.lop >> a.dob >> a.gpa;
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien &a)
    {
        a.solve_name(a);
        a.solve_dob(a);
        os << "B20DCCN001 " << a.name << " " << a.lop << " " << a.dob << " ";
        os << std::fixed << std::setprecision(2) << a.gpa << endl;
        return os;
    }
    void solve_name(SinhVien &a);
    void solve_dob(SinhVien &a);
};

SinhVien::SinhVien()
{
    name = {}, lop = {}, dob = {};
    gpa = 0;
}

SinhVien::~SinhVien()
{
}

void SinhVien::solve_name(SinhVien &a)
{
    transform(a.name.begin(), a.name.end(), a.name.begin(), ::tolower);
    std::string s = {};
    std::stringstream ss(a.name);
    std::string token;
    while (getline(ss, token, ' '))
    {
        token[0] -= 32;
        s += token;
        s += ' ';
    }
    this->name = s;
}

void SinhVien::solve_dob(SinhVien &a)
{
    if (a.dob[2] != '/')
    {
        a.dob.insert(0, "0");
    }
    if (a.dob[5] != '/')
    {
        a.dob.insert(3, "0");
    }
}

int main()
{
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}