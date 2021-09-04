#include <iostream>
#include <string>
#include <map>
// #include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::map<std::string, int> res;
    int n;
    cin >> n;
    while (n--)
    {
        scanf("\n");
        std::string s;
        getline(cin, s);
        res[s]++;
    }
    cout << res.size();
    return 0;
}