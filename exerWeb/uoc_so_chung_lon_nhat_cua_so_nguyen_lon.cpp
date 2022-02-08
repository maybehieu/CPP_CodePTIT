#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

long long uocNgtoLon(std::string s, long long k)
{
    long long mod = 0;
    for (int i = 0; i < s.size(); i++)
    {
        mod = (mod * 10 + s[i] - '0') % k;
    }
    return std::__gcd(k, mod);
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a;
        std::string b;
        cin >> a;
        getline(cin, b);
        cout << a << endl
             << b << endl;
    }

    return 0;
}