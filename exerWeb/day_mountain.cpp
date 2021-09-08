#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
std::vector<int> res;
bool check(int *arr, int l, int r)
{
    int i = l;
    while (i < r && arr[i] <= arr[i + 1])
    {
        ++i;
    }
    if (i == r)
    {
        return true;
    }
    else
    {
        while (i < r && arr[i] > arr[i + 1])
        {
            ++i;
        }
        if (i < r)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
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
        int l, r;
        cin >> l >> r;
        if (check(arr, l, r))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        res.clear();
    }

    return 0;
}