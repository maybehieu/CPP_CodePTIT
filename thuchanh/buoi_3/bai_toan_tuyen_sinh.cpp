#include <iostream>
#include <string.h>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string ma, ten;
    float diem = 0, temp, cong;
    getline(cin, ma);
    getline(cin, ten);
    cin >> temp;
    diem += temp + temp;
    cin >> temp;
    diem += temp;
    cin >> temp;
    diem += temp;
    if (ma[2] == '1')
    {
        cong = 0.5;
    }
    else if (ma[2] == '2')
    {
        cong = 1;
    }
    else
    {
        cong = 2.5;
    }
    cout << ma << " " << ten << " ";
    int temp2 = cong * 10;
    if (temp2 % 10 != 0)
    {
        cout << std::fixed << std::setprecision(1) << cong << " ";
    }
    else
    {
        cout << cong << " ";
    }
    temp2 = diem * 10;
    if (temp2 % 10 != 0)
    {
        cout << std::fixed << std::setprecision(1) << diem << " ";
    }
    else
    {
        cout << diem << " ";
    }
    if (diem + cong < 24)
    {
        cout << "TRUOT";
    }
    else
    {
        cout << "TRUNG TUYEN";
    }

    return 0;
}