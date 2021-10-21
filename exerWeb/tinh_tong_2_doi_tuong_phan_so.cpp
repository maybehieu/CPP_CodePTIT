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
    PhanSo(/* args */)
    {
        tu = 1, mau = 1;
    };
    ~PhanSo(){};
    PhanSo(long long tu, long long mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    friend istream &operator>>(istream &is, PhanSo &p)
    {
        is >> p.tu >> p.mau;
        return is;
    }
    friend ostream &operator<<(ostream &os, PhanSo p)
    {
        os << p.tu << "/" << p.mau << endl;
        return os;
    }
    PhanSo operator+(PhanSo p);
};

PhanSo PhanSo::operator+(PhanSo p)
{
    PhanSo ps;
    ps.tu = tu * p.mau + mau * p.tu;
    ps.mau = mau * p.mau;
    long long uc = std::__gcd(ps.mau, ps.tu);
    ps.mau /= uc;
    ps.tu /= uc;
    return ps;
}
int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}