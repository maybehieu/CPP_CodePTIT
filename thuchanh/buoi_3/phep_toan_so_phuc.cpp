#include <iostream>

using std::cin;
using std::cout;
using std::endl;
struct SoPhuc
{
    int thuc, ao;
};
SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b)
{
    a.thuc += b.thuc;
    a.ao += b.ao;
    b.thuc = a.thuc;
    a.thuc *= a.thuc;
    a.thuc += a.ao * a.ao * -1;
    a.ao = 2 * b.thuc * a.ao;
    return a;
}
void hien_thi(SoPhuc A)
{
    cout << A.thuc << " + " << A.ao << "i" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
}