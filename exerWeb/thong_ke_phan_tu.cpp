#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x, danhdau[10005] = {};
    std::vector<int> arr;
    while (cin >> x)
    {
        if (danhdau[x] == 0)
        {
            arr.push_back(x);
        }
        danhdau[x]++;
    }
    for (auto &&i : arr)
    {
        cout << i << " " << danhdau[i] << endl;
    }

    return 0;
}