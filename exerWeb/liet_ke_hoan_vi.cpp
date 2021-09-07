#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int n, arr[100000];
bool check[10000];
void sinh(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == false)
        {
            check[j] = true;
            arr[i] = j;
            if (i == n - 1)
            {
                for (int k = 0; k < n; k++)
                {
                    cout << arr[k];
                }
                cout << " ";
            }
            else
            {
                sinh(i + 1);
            }
            check[j] = false;
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
        sinh(0);
        cout << endl;
    }
    return 0;
}