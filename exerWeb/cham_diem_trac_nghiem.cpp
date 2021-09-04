#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

double point = 10.0 / 15.0;
std::string de101 = "A B B A D C C A B D C C A B D", de102 = "A C C A B C D D B B C D D B B";
int main()
{
    int test;
    cin >> test;
    std::cin.ignore();
    while (test--)
    {
        int maDe;
        double tongDiem = 0.0;
        std::string dapAn, check;
        cin >> maDe;
        std::cin.ignore();
        getline(cin, dapAn);
        if (maDe == 101)
        {
            check = de101;
        }
        else if (maDe == 102)
        {
            check = de102;
        }
        for (int i = 0; i < dapAn.length(); i += 2)
        {
            if (dapAn[i] == check[i])
            {
                tongDiem += point;
            }
        }
        cout << std::fixed << std::setprecision(2);
        cout << (double)tongDiem << endl;
    }

    return 0;
}