#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
struct MonHoc
{
};

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();
    MonHoc mh[100];
    LichThi lt[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> mh[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> lt[i];
    }
    process(mh, n, lt, m);
    for (int i = 0; i < m; i++)
    {
        cout << lt[i];
    }
}