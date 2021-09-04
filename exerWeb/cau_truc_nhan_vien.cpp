#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
struct NhanVien
{
    string maNV;
    string name;
    string sex;
    string dateOB;
    string address;
    string taxCode;
    string contractDate;
};
string check(string s)
{
    if (s.length() != 10)
    {
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '/')
            {
                if (dem != 2)
                {
                    s.insert(i - 1, "0");
                }
                dem = 0;
                i++;
                continue;
            }
            dem++;
        }
    }
    return s;
}
void nhap(struct NhanVien &a)
{
    getline(cin, a.name);
    cin >> a.sex >> a.dateOB;
    scanf("\n");
    getline(cin, a.address);
    cin >> a.taxCode >> a.contractDate;
    a.dateOB = check(a.dateOB);
    a.contractDate = check(a.contractDate);
    a.maNV = "00001";
}
void in(struct NhanVien a)
{
    cout << a.maNV << " " << a.name << " " << a.sex << " " << a.dateOB << " " << a.address << " " << a.taxCode << " " << a.contractDate;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}