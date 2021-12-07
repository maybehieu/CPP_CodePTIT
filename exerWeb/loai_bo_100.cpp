#include <iostream>
#include <string.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int count = 0;
    int pos = s.find("100");
    while (pos != -1)
    {
        s.erase(s.begin() + pos, s.begin() + pos + 3);
        count += 3;
        pos = s.find("100");
    }
    if (count != 0)
    {
        cout << count << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}