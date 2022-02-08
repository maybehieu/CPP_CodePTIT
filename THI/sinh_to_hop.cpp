#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int n, k, arr[10005] = {};
void Out()
{
    for (int i = 1; i <= k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Try(int a)
{
    for (int i = arr[a - 1] + 1; i <= n - k + a; i++)
    {
        arr[a] = i;
        if (a == k)
        {
            Out();
        }
        else
        {
            Try(a + 1);
        }
    }
}
int main()
{
    cin >> n >> k;
    Try(1);
    return 0;
}