#include <iostream>
#include <set>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, x;
        cin >> n >> m;
        std::set<int> uni, inter;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            uni.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int sizeBefore = uni.size();
            cin >> x;
            uni.insert(x);
            int sizeAfter = uni.size();
            if (sizeBefore == sizeAfter)
            {
                inter.insert(x);
            }
        }
        for (auto &&i : uni)
        {
            cout << i << " ";
        }
        cout << endl;
        for (auto &&i : inter)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}