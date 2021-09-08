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
        int m, n;
        cin >> n >> m;
        int arrA[n], arrB[m];
        std::set<int> uni, inter;
        for (int i = 0; i < n; i++)
        {
            cin >> arrA[i];
            uni.insert(arrA[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arrB[i];
            if (uni.find(arrB[i]) != uni.end())
            {
                inter.insert(arrB[i]);
            }
            uni.insert(arrB[i]);
        }
        for (int i : uni)
        {
            cout << i << " ";
        }
        cout << endl;
        for (int i : inter)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}