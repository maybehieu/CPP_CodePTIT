#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        std::vector<int> res;
        std::vector<int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            res.push_back(arr[i]);
        }
        std::sort(res.begin(), res.end());
        for (int i = 0; i < n; i++)
        {
            it = std::upper_bound(res.begin(), res.end(), arr[i]);
            if (it == res.end())
            {
                cout << "_ ";
            }
            else
            {
                cout << *it << " ";
            }
        }
        cout << endl;
    }

    return 0;
}