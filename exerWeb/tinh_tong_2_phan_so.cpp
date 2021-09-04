#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
struct PhanSo
{
    long long tuSo, mauSo;
};
void nhap(struct PhanSo &a)
{
    cin >> a.tuSo >> a.mauSo;
}
void rutgon(struct PhanSo &p)
{
    long long ucln = std::__gcd(p.tuSo, p.mauSo);
    p.tuSo /= ucln;
    p.mauSo /= ucln;
}
PhanSo tong(struct PhanSo &a, struct PhanSo &b)
{
    PhanSo res;
    res.mauSo = a.mauSo * b.mauSo / std::__gcd(a.mauSo, b.mauSo);
    res.tuSo = (((res.mauSo / a.mauSo) * a.tuSo) + ((res.mauSo / b.mauSo) * b.tuSo));
    rutgon(res);
    return res;
}
void in(struct PhanSo &a)
{
    cout << a.tuSo << "/" << a.mauSo;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}