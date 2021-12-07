#include <iostream>
#include <algorithm>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

int danhdau[100000];
bool can_swap(int a, int b)
{
    if (danhdau[a] > danhdau[b])
    {
        return true;
    }
    else if (danhdau[a] == danhdau[b])
    {
        return a < b;
    }
    return false;
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
            danhdau[arr[i]]++;
        }
        std::sort(arr, arr + n, can_swap);
        for (auto &&i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
        memset(danhdau, 0, sizeof(danhdau));
    }

    return 0;
}