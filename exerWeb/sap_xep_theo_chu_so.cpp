#include <iostream>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
bool check(std::string a, std::string b)
{
    return (a + b > b + a) ? true : false;
}
std::string res[10000];
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> res[i];
        }
        std::sort(res, res + n, check);
        for (int i = 0; i < n; i++)
        {
            cout << res[i];
        }
        cout << endl;
    }

    return 0;
}