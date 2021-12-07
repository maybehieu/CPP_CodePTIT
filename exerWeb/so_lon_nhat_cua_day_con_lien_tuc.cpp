#include <iostream>
#include <algorithm>
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
        int n, k;
        cin >> n >> k;
        std::multiset<int> res;
        int arr[n], idx;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < k; i++)
        {
            res.insert(arr[i]);
        }
        cout << *res.rbegin() << " ";
        for (int i = 1; i <= n - k; i++)
        {
            res.erase(res.find(arr[i - 1]));
            res.insert(arr[i + k - 1]);
            cout << *res.rbegin() << " ";
        }
        cout << endl;
    }

    return 0;
}