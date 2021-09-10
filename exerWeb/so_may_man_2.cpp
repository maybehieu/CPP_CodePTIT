#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
int digitSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum < 10)
    {
        return sum;
    }
    else
    {
        return digitSum(sum);
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string s;
        cin >> s;
        int n = 0;
        for (int i = 0; i < s.size(); i++)
        {
            n += s[i] - '0';
        }
        if (digitSum(n) == 9)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}