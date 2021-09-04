#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string minNum(int m, int n)
{
    if (n > 9 * m || (m > 1 && n == 0))
    {
        return "-1";
    }
    n -= 1;
    std::vector<int> vec(m);
    string res = "";
    for (int i = m - 1; i > 0; i--)
    {
        if (n > 9)
        {
            vec[i] = 9;
            n -= 9;
        }
        else
        {
            vec[i] = n;
            n = 0;
        }
    }
    vec[0] = n + 1;
    for (int i = 0; i < m; i++)
    {
        res.push_back(vec[i] + '0');
    }
    return res;
}
string maxNum(int m, int n)
{
    if (n > 9 * m || (m > 1 && n == 0))
    {
        return "-1";
    }
    std::vector<int> vec(m);
    string res = "";
    for (int i = 0; i < m; i++)
    {
        if (n > 9)
        {
            vec[i] = 9;
            n -= 9;
        }
        else
        {
            vec[i] = n;
            n = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        res.push_back(vec[i] + '0');
    }
    return res;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << minNum(m, n) << " " << maxNum(m, n);
    return 0;
}