#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
struct ThiSinh
{
    std::string name;
    std::string dateOB;
    float diem1, diem2, diem3, tongDiem;
};
void nhap(struct ThiSinh &a)
{
    getline(cin, a.name);
    cin >> a.dateOB;
    cin >> a.diem1 >> a.diem2 >> a.diem3;
    a.tongDiem += a.diem1 + a.diem2 + a.diem3;
}
void in(struct ThiSinh a)
{
    cout << a.name << " " << a.dateOB << " ";
    cout << std::fixed << std::setprecision(1) << a.tongDiem;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}