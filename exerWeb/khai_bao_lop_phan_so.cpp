#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class PhanSo
{
private:
    long long tu, mau;

public:
    PhanSo(/* args */);
    ~PhanSo();
    friend istream &operator>>(istream &is, PhanSo &p);
    friend ostream &operator<<(ostream &os, PhanSo &p);
    PhanSo(long long tu, long long mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    void rutgon()
    {
        long long uoc = std::__gcd(tu, mau);
        tu /= uoc, mau /= uoc;
    }
};

PhanSo::PhanSo(/* args */)
{
}

PhanSo::~PhanSo()
{
}

istream &operator>>(istream &is, PhanSo &p)
{
    is >> p.tu >> p.mau;
    return is;
}
ostream &operator<<(ostream &os, PhanSo &p)
{
    os << p.tu << "/" << p.mau << endl;
    return os;
}

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}