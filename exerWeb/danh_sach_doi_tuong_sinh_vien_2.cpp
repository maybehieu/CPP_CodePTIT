#include <iostream>
#include <string.h>
#include <iomanip>
#include <algorithm>
#include <sstream>
#define a() a

using std::cin;
using std::cout;
using std::endl;
using std::string;
int k = 0;

class SinhVien
{
private:
    string name, lop, dob, masv;
    float gpa;

public:
    SinhVien();
    ~SinhVien();
    friend std::istream &operator>>(std::istream &is, SinhVien &a)
    {
        k++;
        scanf("\n");
        getline(is, a.name);
        is >> a.lop >> a.dob >> a.gpa;
        if (k < 10)
        {
            a.masv += "00";
            a.masv += std::to_string(k);
        }
        else
        {
            a.masv += "0";
            a.masv += std::to_string(k);
        }
        return is;
    }
    friend std::ostream &operator<<(std::ostream &os, SinhVien &a)
    {
        a.solve_dob(a);
        a.normalizeName(a);
        os << a.masv << " " << a.name << " " << a.lop << " " << a.dob << " ";
        os << std::fixed << std::setprecision(2) << a.gpa << endl;
        return os;
    }
    void solve_dob(SinhVien &a);
    void normalizeName(SinhVien &a);
};

SinhVien::SinhVien()
{
    masv = "B20DCCN";
    name = {}, lop = {}, dob = {};
    gpa = 0;
}

SinhVien::~SinhVien()
{
    k = 0;
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
void SinhVien::normalizeName(SinhVien &a)
{
    transform(a.name.begin(), a.name.end(), a.name.begin(), ::tolower);
    string s = {};
    std::stringstream ss(a.name);
    string token;
    while (ss >> token)
    {
        token[0] -= 32;
        s += token;
        s += ' ';
    }
    this->name = s;
}
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}