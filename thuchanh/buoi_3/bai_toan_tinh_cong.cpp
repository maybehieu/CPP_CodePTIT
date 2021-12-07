#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct sv
{
    string msv;
    string ten;
    int luong;
    int so_cong;
    string cv;
};

int main()
{
    struct sv a;
    a.msv = "NV01";
    getline(cin, a.ten);
    cin >> a.luong >> a.so_cong;
    cin.ignore();
    cin >> a.cv;
    a.luong *= a.so_cong;
    long thuong, phucap, thunhap, temp;
    if (a.so_cong >= 25)
    {
        temp = 20;
    }
    else if (a.so_cong < 22)
    {
        temp = 0;
    }
    else if (a.so_cong >= 22 && a.so_cong < 25)
    {
        temp = 10;
    }
    thuong = temp * a.luong;
    thuong /= 100;

    if (a.cv == "GD")
    {
        phucap = 250000;
    }
    else if (a.cv == "PGD")
    {
        phucap = 200000;
    }
    else if (a.cv == "TP")
    {
        phucap = 180000;
    }
    else if (a.cv == "NV")
    {
        phucap = 150000;
    }

    cout << a.msv << " ";
    cout << a.ten << " ";
    cout << a.luong << " ";
    cout << thuong << " ";
    cout << phucap << " ";
    cout << a.luong + thuong + phucap;
}