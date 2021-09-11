#include <iostream>
#include <math.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
int x;
bool check(int a, int b)
{
    return (abs(x - a) < abs(x - b));
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        std::stable_sort(arr, arr + n, check);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}