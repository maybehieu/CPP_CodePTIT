#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;
std::map<int, int> danhdau;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            danhdau[arr[i]]++;
        }
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            if (danhdau[arr[i] + x] != 0)
            {
                check = true;
                break;
            }
        }
        if (check)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}