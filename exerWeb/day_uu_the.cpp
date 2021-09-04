#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
int dem = 0, le = 0, chan = 0;
void kiemtra(std::string so, int a)
{
    if ((so[a] - '0') % 2 == 0)
    {
        chan++;
        dem++;
    }
    else
    {
        le++;
        dem++;
    }
}
int main()
{
    int test;
    cin >> test;
    std::cin.ignore();
    while (test--)
    {
        std::string so;
        getline(cin, so);
        dem = 0, chan = 0, le = 0;
        for (int i = 0; i < so.length(); i++)
        {
            if (so[i] != ' ' && so[i + 1] == ' ')
            {
                kiemtra(so, i);
            }
        }
        kiemtra(so, so.length() - 1);
        if ((dem % 2 == 0 && chan > le) || (dem % 2 == 1 && chan < le))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}