#include <iostream>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        std::vector<long long> res(n);
        res.front() = arr[0] * arr[1];
        res.back() = arr[n - 1] * arr[n - 2];
        for (int i = 1; i < n - 1; i++)
        {
            res[i] = arr[i - 1] * arr[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}