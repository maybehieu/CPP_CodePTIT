#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string ma, ten;
    long long luong, heso = 0, phucap;
    getline(cin, ma);
    if (ma[0] == 'H' && ma[1] == 'T')
    {
        phucap = 2000000;
    }
    else if (ma[0] == 'H' && ma[1] == 'P')
    {
        phucap = 900000;
    }
    else if (ma[0] == 'G' && ma[1] == 'V')
    {
        phucap = 500000;
    }
    heso = ma[3] - '0' + 10 * (ma[2] - '0');
    getline(cin, ten);
    cin >> luong;
    luong *= heso;
    luong += phucap;
    cout << ma << " " << ten << " " << heso << " " << phucap << " " << luong << endl;
    return 0;
}