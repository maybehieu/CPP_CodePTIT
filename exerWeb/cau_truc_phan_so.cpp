#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
struct PhanSo
{
    long long tuSo, mauSo;
};
void nhap(struct PhanSo &p)
{
    cin >> p.tuSo;
    cin >> p.mauSo;
}
void rutgon(struct PhanSo &p)
{
    long long ucln = std::__gcd(p.tuSo, p.mauSo);
    p.tuSo /= ucln;
    p.mauSo /= ucln;
}
void in(struct PhanSo &p)
{
    cout << p.tuSo << "/" << p.mauSo;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}