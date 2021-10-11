#include <iostream>
#include <vector>
#include <algorithm>

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
        int temp;
        std::vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        std::sort(arr.begin(), arr.end());
        std::vector<int>::iterator it;
        long long count = 0;
        for (it = arr.begin(); it < arr.end() - 1; it++)
        {
            int a = it - arr.begin();
            int cur = std::lower_bound(it + 1, arr.end(), k - arr[a]) - arr.begin();
            if (cur < n)
            {
                count += n - cur;
            }
        }
        cout << count << endl;
    }

    return 0;
}