#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int solve(long long n)
{
    int arr[20] = {}, pos = 0;
    while (n > 0)
    {
        arr[pos++] = n % 10;
        n /= 10;
    }
    int p = -1;
    pos--;
    for (int i = pos; i >= 0; i--)
    {
        if (arr[i] == 0 && arr[i - 1] == 8 && arr[i - 2] == 4)
        {
            p = i;
            break;
        }
    }
    if (p == -1)
    {
        return 0;
    }
    for (int i = pos; i >= 0; i--)
    {
        if (i == p)
        {
            i -= 2;
            continue;
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        solve(n);
    }

    return 0;
}