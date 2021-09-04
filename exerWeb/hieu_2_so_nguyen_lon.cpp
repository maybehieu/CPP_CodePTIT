#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int so(char c)
{
    return c - '0';
}
char chu(int n)
{
    return (char)(n + 48);
}
void chuanhoa(string &a, string &b)
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
string hieu(string a, string b)
{
    string res = " ";
    int temp = 0;
    chuanhoa(a, b);
    if (a < b)
    {
        std::swap(a, b);
    }
    int l = a.size();
    for (int i = l - 1; i >= 0; i--)
    {
        temp = so(a[i]) - so(b[i]) - temp;
        if (temp < 0)
        {
            temp += 10;
            res.insert(0, 1, chu(temp));
            temp = 1;
        }
        else if (temp >= 0)
        {
            res.insert(0, 1, chu(temp));
            temp = 0;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string res;
        res = hieu(a, b);
        cout << res << endl;
    }
}