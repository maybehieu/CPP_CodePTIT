#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
void chuanhoa(std::string &a, std::string &b)
{
    int l1 = a.size();
    int l2 = b.size();
    if (l1 > l2)
    {
        b.insert(0, l1 - l2, '0');
    }
    else
    {
        a.insert(0, l2 - l1, '0');
    }
}
int so(char c)
{
    return c - '0';
}
char chu(int n)
{
    return (char)(n + 48);
}
std::string tong(std::string a, std::string b)
{
    std::string res = "";
    int temp = 0;
    chuanhoa(a, b);
    int l = a.size();
    for (int i = l - 1; i >= 0; i--)
    {
        temp += so(a[i]) + so(b[i]);
        if (temp < 10)
        {
            res.insert(0, 1, chu(temp));
            temp = 0;
        }
        else
        {
            res.insert(0, 1, chu(temp - 10));
            temp = 1;
        }
    }
    if (temp == 1)
    {
        res.insert(0, 1, chu(temp));
    }
    return res;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string a, b;
        cin >> a >> b;
        cout << tong(a, b) << endl;
    }

    return 0;
}