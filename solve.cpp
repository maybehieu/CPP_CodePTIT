#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int arr[100000000] = {};

int main()
{
    int test;
    cin >> test;
    if (test <= 0)
    {
        cout << "wot ";
        return 0;
    }
    while (test--)
    {
        int n, danhdau[100005] = {}, count = 0;
        cin >> n;
        if (n <= 0)
        {
            cout << "wot ";
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            danhdau[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (danhdau[arr[i]] != 0)
            {
                cout << arr[i] << " ";
                count += (danhdau[arr[i]] - 1);
                danhdau[arr[i]] = 0;
            }
        }
        cout << endl;
        cout << count << endl;
    }

    return 0;
}