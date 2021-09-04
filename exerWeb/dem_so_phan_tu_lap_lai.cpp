#include <iostream>

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
        int arr[n], danhdau[100005] = {}, checked[100005] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            danhdau[arr[i]]++;
        }
        int temp = 0, dem = 0;
        for (int i = 1; i < n; i++)
        {
            if (danhdau[arr[i]] > 1 && checked[arr[i]] != 1)
            {
                dem += danhdau[arr[i]];
                checked[arr[i]]++;
            }
        }
        cout << dem << endl;
    }

    return 0;
}