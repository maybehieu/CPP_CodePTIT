#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int arr[20], n;
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i];
    }
    cout << " ";
}
void sinh(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        arr[i] = j;
        if (i == n)
        {
            xuat();
        }
        else
        {
            sinh(i + 1);
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        sinh(1);
        cout << endl;
    }

    return 0;
}