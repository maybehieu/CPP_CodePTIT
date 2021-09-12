#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
typedef struct
{
    long long tu, mau;
} PhanSo;
PhanSo tinh(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    int ucln = std::__gcd(c.tu, c.mau);
    c.tu /= ucln, c.tu *= c.tu;
    c.mau /= ucln, c.mau *= c.mau;
    return c;
}
void process(PhanSo a, PhanSo b)
{
    int temp = std::__gcd(a.tu, a.mau);
    a.tu /= temp, a.mau /= temp;
    temp = std::__gcd(b.tu, b.mau);
    b.tu /= temp, b.mau /= temp;
    PhanSo c = tinh(a, b);
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    temp = std::__gcd(d.tu, d.mau);
    d.tu /= temp, d.mau /= temp;
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}