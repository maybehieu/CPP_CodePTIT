#include <iostream>

using std::cin;
using std::cout;
using std::endl;
void in(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void solve(int a[][100], int n, int b[][100], int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] *= b[i % m][j % m];
        }
    }
}
void out(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m, a[100][100], b[100][100];
    cin >> n;
    in(a, n);
    cin >> m;
    in(b, m);
    solve(a, n, b, m);
    out(a, n);
    return 0;
}