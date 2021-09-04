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
    scanf("\n");
    getline(cin, a.name);
    cin >> a.sex >> a.dateOB;
    scanf("\n");
    getline(cin, a.address);
    cin >> a.taxCode >> a.contractDate;
    a.dateOB = check(a.dateOB);
    a.contractDate = check(a.contractDate);
}
void inds(struct NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
        {
            cout << "0000" << i + 1 << " ";
        }
        else
        {
            cout << "000" << i + 1 << " ";
        }
        cout << a[i].maNV << " " << a[i].name << " " << a[i].sex << " " << a[i].dateOB << " " << a[i].address << " " << a[i].taxCode << " " << a[i].contractDate << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}