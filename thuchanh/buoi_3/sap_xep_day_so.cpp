#include <iostream>
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
        long long n, m, MAX = -1e9, check = 0, temp;
        int i = 0, j = 0;
        cin >> n >> m;
        long long arr1[n] = {}, arr2[n] = {};
        for (int a = 0; a < n; a++)
        {
            cin >> temp;
            if (temp < 0)
            {
                arr1[i++] = temp;
            }
            else
            {
                arr2[j++] = temp;
            }
            MAX = std::max(temp, MAX);
        }
        for (int a = 0; a < i; a++)
        {
            if (arr1[a] == MAX && !check)
            {
                cout << m << " ";
                check = 1;
            }
            cout << arr1[a] << " ";
        }
        for (int a = 0; a < j; a++)
        {
            if (arr2[a] == MAX && !check)
            {
                cout << m << " ";
                check = 1;
            }
            cout << arr2[a] << " ";
        }
        cout << endl;
    }

    return 0;
}