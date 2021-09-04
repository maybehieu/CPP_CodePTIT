#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
struct SinhVien
{
    std::string name;
    std::string dateOB;
    std::string studentCode;
    std::string curClass;
    float gpa;
};
void check(struct SinhVien &a)
{
    if (a.dateOB.length() != 10)
    {
        int dem = 0;
        for (int i = 0; i < a.dateOB.length(); i++)
        {
            if (a.dateOB[i] == '/')
            {
                if (dem != 2)
                {
                    a.dateOB.insert(i - 1, "0");
                }
                dem = 0;
                i++;
                continue;
            }
            dem++;
        }
    }
}
void nhap(struct SinhVien &a)
{
    getline(cin, a.name);
    cin >> a.curClass >> a.dateOB >> a.gpa;
    a.studentCode = "B20DCCN001";
    check(a);
}
void in(struct SinhVien a)
{
    cout << a.studentCode << " " << a.name << " " << a.curClass << " " << a.dateOB << " ";
    cout << std::fixed << std::setprecision(2);
    cout << a.gpa;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}